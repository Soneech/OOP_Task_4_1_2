#include <iostream>
#include "Class4.h"
using namespace std;

int main() {
	string name;
	unsigned int number;
	cin >> name >> number;

	Class1* object = (Class1*) new Class4(name, number);
	((Class1*)object)->print_info();
	((Class2*)object)->print_info();
	((Class3*)object)->print_info();
	((Class4*)object)->print_info();

	delete (Class4*)object;

	return 0;
}