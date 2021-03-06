//Omid55
// pointers & references in C++
#include <iostream>
using namespace std;

int main()
{
	// normal int variable
	int a = 100;

	// pointer to a (which is an int value)
	int* b = &a;
	cout << "a: " << a << endl << "&a: " << &a << endl << endl;
	cout << "b: " << b << endl << "*b: " << *b << endl << endl;

	// reference
	int &c = a;
	cout << "c: " << c << endl << "&c: " << &c << endl;
	c = 5;
	cout << "a: " << a << endl << "&a: " << &a << endl << endl;

	// initialize a pointer with new
	int *d = new int(56);
	cout << "d: " << d << endl << "*d: " << *d << endl << "&d: " << &d << endl << endl;

	// free the memory of a pointer with delete
	int* p = new int(10);
	delete p;
	//cout << "*p: " << *p << endl;    // it causes a runtime error

	// pointer of pointer
	int **e = &d;
	cout << "e: " << e << endl << "*e: " << *e << endl << "**e: " << **e << endl << endl;

	// initialize a value with pointer
	int f;
	int* g = &f;
	*g = 10;
	cout << "f: " << f << endl << endl;

	// pointers have type (another words, they have size)
	double* h;
	//cout << "h: " << h << endl;   // it causes a runtime error
	h = new double(11.75);
	cout << "h: " << h << endl << "*h: " << *h << endl;
	cout << "size of h: " << sizeof(h) << endl << "size of g: " << sizeof(g) << endl << "size of *h: " << sizeof(*h) << endl << "size of *g: " << sizeof(*g) << endl << endl;

	// just an address with no value
	long* i = new long;
	cout << "i: " << i << endl << "*i: " << *i << endl << endl;

	return 0;
}

