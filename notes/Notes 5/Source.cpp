/* Constants 

 Identifiers with values that will not change during execution

 Useful as parameters in your code

 may be implemented with directives or as vatiavbles

*/

/* Constants as directives

The #define directive schedules a find-and-replace ioeration

#define ROOMS 4

The use of #define is sometimes discouraged

(Sometimes said to be a bad practice and a better alternative)

*/

/* The const Qualifier

Used in a regular declaration

Declarations specify a type

Scope encapsulation is enforced

const is not the same in c and c++ (c only means a variable cannot be changed. Lacks some features implemented in c++)
*/

/* Arrays

Collections of data

Homogeneous (all the same data type)

Fixed in size (cannot resize them)

Contiguous in memory

auto doesn't work for arrays
*/


/*#include <iostream>

//#define AGE_LENGTH 4
const int AGE_LENGTH = 4;

int age[AGE_LENGTH];
float temperature[] = { 31.5, 32.7, 38.9 };
using namespace std;

int main() {
	age[0] = 25;
	age[1] = 20;
	age[2] = 19;
	age[3] = 19;

	cout << "The Age array has " << AGE_LENGTH << " elements" << endl;
	cout << "Age[0] = " << age[0] << endl;
	cout << "Age[1] = " << age[1] << endl;
	cout << "Age[2] = " << age[2] << endl;
	cout << "Age[3] = " << age[3] << endl;
	cout << endl;
	cout << "Temp[0] = " << temperature[0] << endl;
	cout << "Temp[1] = " << temperature[1] << endl;
	cout << "Temp[2] = " << temperature[2] << endl;
	return(0);
}

//Example of arrays and const

*/


/* Strings

Not a native type in the language

In C, strings are arrays of characters (char)

The std::string class comes with the c++ standard library

*/

#include <iostream>
#include <string>
#include <cstring>

using namespace std;

const int LENGTH1 = 25;

char array_str1[LENGTH1] = "Hey guys! ";
char array_str2[] = "What's up?";

string std_str1 = "Hi everyone! ";
string std_str2 = "How's the going?";
int main() {
	strcat_s(array_str1, LENGTH1, array_str2);
	cout << array_str1 << endl;
	cout << std_str1 + std_str2 << endl;


	return (0);
}