/* Structures

Containers of heterogeneous data members (group ints strings and othe objects in one structre that contains them)

useful for implementing simple models

structures are also in c

Enumerations are sets of symbols that act as constant / pro over constant is the encapsulation they provide.

*/

/*#include <iostream>
#include <string>

using namespace std;

enum cow_purpose {dairy, meat,hide,pet};

struct cow
{
	string name;
	int age;
	unsigned char purpose;

};
int main() {
	cow my_cow;
	my_cow.age = 5;
	my_cow.name = "Besty";
	my_cow.purpose = dairy;
	cout << my_cow.name << " is a type-" << (int)my_cow.purpose << " cow." << endl;
	cout << my_cow.name << " is " << my_cow.age << " years old.";

	return 0;
}
*/

/* Classes

basic elements of object-oriented programming

useful for implementing models

Contain data and function members

The same as Java or python classes

classes by default are private


*/

/* #include <iostream>
#include <string>

using namespace std;

enum cow_purpose { dairy, meat, hide, pet };

class cow
{
public:

	cow(string name_i, int age_i, unsigned char purpose_i) { name = name_i; age = age_i; purpose = purpose_i; }

	string get_name() {
		return name;
	}
	int get_age(){
		return age;
	}
		unsigned char get_purpose(){
		return purpose;
	}
		void set_age(int new_age) {
			age = new_age;
		}
		void set_name(int new_name) {
			name = new_name;
		}
		void set_purpose(int new_purpose) {
			purpose = new_purpose;
		}
private:
	string name;
	int age;
	unsigned char purpose;

};
int main() {
	cow my_cow("Hildy",7,pet);

	cout << my_cow.get_name() << " is a type-" << (int)my_cow.get_purpose() << " cow." << endl;
	cout << my_cow.get_name() << " is " << my_cow.get_age() << " years old.";

	return 0;
}
*/

/* Inplementation and header files

Header files contain class definitions and function declarations

implementation files contain executable code 

Implementation files must include their header files

your code should only include the header files

*/

#include <iostream>
#include <string>
#include "Cow.h"

using namespace std;

int main() {
	cow my_cow("Hildy", 7, pet);

	cout << my_cow.get_name() << " is a type-" << (int)my_cow.get_purpose() << " cow." << endl;
	cout << my_cow.get_name() << " is " << my_cow.get_age() << " years old.";

	return 0;
}
