#include <iostream>
#include "Class4.h"
using namespace std;

Class4::Class4(string name, int number): Class3(name, number) {
	this->name = name + "_4";
	this->number = number * number * number * number;
}

void Class4::print_info() {
	cout << name << " " << number;
}