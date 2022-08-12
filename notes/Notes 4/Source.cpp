#include <iostream>
#include <typeinfo>
#include <string>
#include <cstdint>

#define CAPACITY 5000
#define DEBUG
using namespace std;
 
/*There are 6 variables of automatic type a, b, c,d,e,f*/

/*auto a = 8;
auto b = 1234567890;
auto c = 3.14f;
auto d = 3.14;
auto e = true;
auto f = 'd';

int main() {
	cout << typeid(a).name()<< endl;
	cout << typeid(b).name() << endl;
	cout << typeid(c).name() << endl;
	cout << typeid(d).name() << endl;
	cout << typeid(e).name() << endl;
	cout << typeid(f).name() << endl;
	return 0;
}
*/

/* Preprocessor Directives

Your code is preprocessed prior to compiling 

directives tell the preprocessor what to add or remove in the code

useful for libraries, constants, selecting code blocks, etc.


*/

int main() {
	int32_t large = CAPACITY;
	uint8_t small = 37;
#ifdef DEBUG
	cout << "[About to perform the addition]" << endl;
#endif
	large += small; // shorthand for large = large + small
	cout << "The large integer is " << large << endl;
	return 0;
}