#include "Library.h"

void Library::sayHello() {
	std::cout << "Hello World!\n";
}

void Library::sayGoodbye() {
	std::cout << "Goodbye World!\n";
}

void Library::doMath(int a, int b) {
	std::cout << a << " + " << b << " = " << (a+b) << "\n";
}