/* Integers

Signed or unsigned (unsigned can never be negitave)

int (implementation dependent)

char (8 bits)

stdint.h contains portable types like unit32_t (unsigned 32-bit integer type with the width of exactly 8 , 16, 32, 64 bits)
*/

/*Floating- Point Numbers

Floating-point numbers represent real numbers

Ex: 3.14159, 1.3333333, 0.5, -12.44

IEEE 754 binary floating point

float, double, long double

*/

/* Boolean

bool (represents true or false)

Ex: anything other than 0 is true

*/

/*String

Strings are not natively supported by the language

they are supported in the standard library as a class

<string> provides the string class with lots of functions
*/

/* Pointers

Special data type for a memory address

pointers act as references to variables

The same pointer may be used to access many differnet variables sequentially 

*/

/* Variables

temporary data storage units

they must be declared prior to being used

the declaration must specify a type and a name

the declaration may contain an initialization
*/

/* constant literals (fixed values that cannot be changed)

int: 123, -5, 023, 0x3A, 0b1100, 23U

float: 23.0f, 0.0f

double: 25.4, -22.5

char: 'a', 'x', '\0', '\n'

string: "hi there"

*/

#include <iostream>

using namespace std;

int a, b = 5; /*Global variables can be accessed anywhere*/

int main() {

	bool my_flag; /*Local variable only used within the function*/

	a = 7;

	my_flag = false;

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	cout << "flag = " << my_flag << endl;
	my_flag = true;
	cout << "a+b = " << a+b << endl;
	cout << "b-a = " << b-a << endl;
	cout << "flag = " << my_flag << endl;

	unsigned int positive;
	positive = b - a;
	cout << "b-a (unsigned) = " << positive << endl; /* same as -2 in binary */


	return 0;

}

/* Expressions

A symbolic representation of a calculation 

may contain variables, onstants, and operators

must produce a value
*/

/*Assignments

A line of code that assigns a value to a variable

Must contain a left-hand side and a right- hand side expression

The left-hand side expression must be able to hold a value 

the expression data types must match

KEEP THE CODE CONSISTENT



*/

/*Popular Operations

Arithmetic: + - * / %

bitwise:& | ` ^ (bitwise not logical)

Logical: &&(and) ||(or) !(not)

relational: == != > < >= <= to compare values

pointer: *(gives you access to the variable to pointer is pointing to) &(returns the address of the variable to its right) -> (gives you access to members of classes or structures from a pointer) MAKE SURE TO UNDERSTAND THIS**********
*/

