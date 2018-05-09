/*
Author: Phillip Chen
Course: {135,136}
Instructor: <Alex Nikolaev
Assignment: <Lab 5a

This program takes one input, a non negative number. It tells you how many digits long that digit with a function
*/

# include <iostream>
using namespace std;

int numDigit(int num){
	int counter = 0;
	while (num>=10){
		num = num/10;
		counter++;
	}
	counter=counter+1;
	return counter;
}

int main(){

	cout<<"Enter number: ";
	int num = 0;
	cin>>num;
		
	int result = numDigit(num);
	cout << result << endl;

}

