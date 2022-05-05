#ifndef CLASS4_H
#define CLASS4_H
#include <string>
#include "Class3.h"
using namespace std;

class Class4: private Class3 {
private:
	string name;
	int number;
public:
	Class4(string, int);
	void print_info();
};
#endif
