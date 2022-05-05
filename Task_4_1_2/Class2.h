#ifndef CLASS2_H
#define CLASS2_H
#include <string>
#include "Class1.h"
using namespace std;

class Class2: private Class1 {
private:
	string name;
	int number;
public:
	Class2(string, int);
	void print_info();
};
#endif
