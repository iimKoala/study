#include <iostream>

/* iostream = input output stream */

using namespace std;

/* gets standard library shortcuts? */

/*int main() {
	std::cout << "Hi There!" << std::endl;
	return 0;
}
*/


/*std only used if not using namespace std;*/

/* int (integer)

main function name, program must always have main

() parentheses 

{} brackets anything inbetween is part of the code
*/

string name;

int main() {
	cout << " Hello, what is you name? ";

	cin >> name;

	cout << " Welcome " << name << endl;

	return 0;
}