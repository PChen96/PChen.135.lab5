/*
Author: Phillip Chen
Course: {135,136}
Instructor: <Alex Nikolaev
Assignment: <Lab 5b

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

int getDigit(int num, int result, int index){
	for(int i=0;i<result-index+1;i++){	//5-2 of 12345 3
		if(i<result-index){
			num=num/10;
			}
		else{ num=num%10;
			  return num;
			}
		}
	}
int main(){

	cout<<"Enter number: ";
	int num = 0;
	cin>>num;
	cout<<"Enter index: ";
	int index = 0;
	cin>>index;

	int result=numDigit(num);

	int digit = getDigit(num,result,index);
	cout<<digit<<endl;
	

}
