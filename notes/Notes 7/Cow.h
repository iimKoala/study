#pragma once


#ifndef COW_H
#define COW_H
#include <string>

enum cow_purpose { dairy, meat, hide, pet };

class cow
{
public:

	cow(std::string name_i, int age_i, unsigned char purpose_i);

	std::string get_name();
	int get_age();
	unsigned char get_purpose();
	void set_age(int new_age);
	void set_name(int new_name);
	void set_purpose(int new_purpose);
private:
	std::string name;
	int age;
	unsigned char purpose;

};


#endif //COW_H