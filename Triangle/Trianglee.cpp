//============================================================================
// Name        : Trianglee.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
#include "Triangle.h"
#include <iostream>
using namespace std;

int main() {
	Triangle b1(1,23,4,5);


	cin>>b1;
	cout<<b1;
	Triangle b2(1,23,4,5);
	cin>>b2;
	cout<<b2;


	if(b1 == b2){
	cout<<"equals";
	}
	if(b1 != b2){
	cout<<"  ----  ";
	}
		return 0;
	}
