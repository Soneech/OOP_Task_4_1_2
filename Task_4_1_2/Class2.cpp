#include <iostream>
#include "Class2.h"
using namespace std;

Class2::Class2(string name, int number): Class1(name, number) {
	this->name = name + "_2";
	this->number = number * number;
}

void Class2::print_info() {
	cout << name << " " << number << endl;
}