#include "Cow.h"
cow::cow(std::string name_i, int age_i, unsigned char purpose_i) {
	name = name_i; 
	age = age_i; 
	purpose = purpose_i; 
}

std::string cow::get_name() {
	return name;
}
int cow::get_age() {
	return age;
}
unsigned char cow::get_purpose() {
	return purpose;
}
void cow::set_age(int new_age) {
	age = new_age;
}
void cow::set_name(int new_name) {
	name = new_name;
}
void cow::set_purpose(int new_purpose) {
	purpose = new_purpose;
}