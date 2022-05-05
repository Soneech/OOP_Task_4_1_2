#ifndef CLASS1_H
#define CLASS1_H
#include <string>
using namespace std;

class Class1 {
	private:
		string name;
		int number;
	public:
		Class1(string, int);
		void print_info();
};
#endif
