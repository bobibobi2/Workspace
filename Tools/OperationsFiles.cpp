/*
 * OperationsFiles.cpp
 *
 *  Created on: May 16, 2017
 *      Author: Puzz
 */

#include "OperationsFiles.h"
#include <cstdlib>
#include <iomanip>
#include <iostream>
#include "Toools.h"
const char* path="D:\Workspace 2\Cheat\Hardware.dat";
OperationsFiles::OperationsFiles(const char* path) :file(path,ios::binary |ios ::out | ios::in) {


}

int OperationsFiles::enterChoice() {
	cout << "\nEnter your choice" << endl
	 << "1 - store a formatted text file of tool" << endl
	 << " called \"print.txt\" for printing" << endl
	 << "2 - upgrade tool" << endl
	 << "3 - new tool" << endl
	 << "4 - destroy tool" << endl
	 << "5 - end program\n? ";

	 int menuChoice;
	 cin >> menuChoice;
	return menuChoice;
}

void OperationsFiles::createTextFile(fstream& file) {
	ofstream outPrint("print.txt",ios::out);
	if(!outPrint){
		cerr<<"file cant be open"<<endl;
		exit(1);
	}
	outPrint << left << setw( 10 ) << "tool" << setw( 16 )
	 << "tooltipe" << setw( 11 ) << "quanity" << right
	 << setw( 10 ) << "pprice" << endl;

	file.seekg( 0 );
	Toools tool;
	file.read( reinterpret_cast< char * >( &tool ),
sizeof( Toools ) );
	while ( !file.eof() )
	{
	 if ( tool.getToolNumber() != 0 ) // skip empty records
	 outputLine( outPrint, tool );


	file.read( reinterpret_cast< char * >( &tool ),
	 sizeof( Toools ) );
	 }
}

void OperationsFiles::updateRecord(fstream& updatefile) {
	int toolNumber = getNumber( "Enter tool to update" );
	updatefile.seekg( (toolNumber - 1 ) * sizeof( Toools ) );
	Toools tool;
	updatefile.read( reinterpret_cast< char * >( &tool ),
	sizeof( Toools ) );
	 if ( tool.getToolNumber() != 0 )
	 {
	 outputLine( cout, tool );
	 cout << "\nEnter charge (+) or payment (-): ";
	 double price;
	cin >> price;
	double oldtool = tool.getCost();
	tool.setCost( oldtool + price );
	 outputLine( cout, tool );


	updatefile.seekp( ( toolNumber - 1 ) * sizeof( Toools ) );
	 updatefile.write( reinterpret_cast< const char * >( &tool ),
	 sizeof( Toools ) );
	 }
	else
	 cerr << "Tool #" << toolNumber
	<< " has no information." << endl;
	 }



void OperationsFiles::newRecord(fstream& &insertInFile) {

	int toolNumber = getNumber( "Enter new tool number" );

	 insertInFile.seekg( ( toolNumber - 1 ) * sizeof( Toools ) );

	 Toools tool;
	 insertInFile.read( reinterpret_cast< char * >( &tool ),
	 sizeof( Toools ) );


	if ( tool.getToolNumber() == 0 )
	{
	string  size;
	 string quantity;
	double cost;
	cout << "Enter name	, quantity, cost\n? ";
	 cin >>name;
	cin >>quantity;
	 cin >> cost;

	 tool.setName( name );
	 tool.setQuantity( quantity );
	 tool.setCost( cost );
	 tool.setToolNumber( toolNumber );

	 insertInFile.seekp( ( toolNumber - 1 ) * sizeof( Toools ) );


	insertInFile.write( reinterpret_cast< const char * >( &tool ),
	 sizeof( Toools ) );
	 }
	else
	 cerr << "Tool #" << toolNumber
	 << " already contains information." << endl;
	 }

void OperationsFiles::deleteRecord(fstream &deleteFromFile )
 {

 int toolNumber = getNumber( "Enter tool to delete" );

 deleteFromFile.seekg( ( toolNumber - 1 ) * sizeof( Toools ) );

 Toools client;
 deleteFromFile.read( reinterpret_cast< char * >( &client ),
 sizeof( Toools ) );
 if ( client.getToolNumber() != 0 )
 {
Toools blankClient;

 deleteFromFile.seekp( ( toolNumber - 1 ) *
 sizeof( Toools ) );

 deleteFromFile.write(
 reinterpret_cast< const char * >( &blankClient ),
 sizeof( Toools ) );

 cout << "Tool #" << toolNumber << " deleted.\n";
 }
 else
 cerr << "Tool #" << toolNumber << " is empty.\n";
 }

void OperationsFiles::outputLine(ostream &output, const Toools &record )
 {
 output << left << setw( 10 ) << record.getToolNumber()
 << setw( 16 ) << record.getName()
 << setw( 11 ) << record.getQuantity()
 << setw( 10 ) << setprecision( 2 ) << right << fixed
 << showpoint << record.getCost() << endl;
 }



int OperationsFiles::getNumber(const char * const prompt )
 {
 int toolNumber;


 do
 {
 cout << prompt << " (1 - 100): ";
cin >> toolNumber;
 } while ( toolNumber < 1 || toolNumber > 100 );

 return toolNumber;
 }

OperationsFiles::~OperationsFiles() {

}

