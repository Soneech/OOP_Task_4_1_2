#ifndef CLASS3_H
#define CLASS3_H
#include <string>
#include "Class2.h"
using namespace std;

class Class3: private Class2 {
private:
	string name;
	int number;
public:
	Class3(string, int);
	void print_info();
};
#endif
