#include <iostream>
#include "Class1.h"
using namespace std;

Class1::Class1(string name, int number) {
	this->name = name + "_1";
	this->number = number;
}

void Class1::print_info() {
	cout << name << " " << number << endl;
}