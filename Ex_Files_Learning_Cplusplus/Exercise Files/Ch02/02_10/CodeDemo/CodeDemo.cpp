// Learning C++ 
// Challenge 02_10
// Calculate an Average, by Eduardo Corpeño 

#include <iostream>

using namespace std;

int main(){

	int nums[5] = {1,23,32,24,337};

	float average;

	average = nums[0] + nums[1] + nums[2] + nums[3] + nums[4] /(float) 5;

	cout << "Average =" << average << endl;
   
	
	return (0);
}
