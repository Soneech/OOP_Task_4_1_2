#include <iostream>
#include "Class3.h"
using namespace std;

Class3::Class3(string name, int number): Class2(name, number) {
	this->name = name + "_3";
	this->number = number * number * number;
}

void Class3::print_info() {
	cout << name << " " << number << endl;
}