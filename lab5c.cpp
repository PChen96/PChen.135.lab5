/*
Author: Phillip Chen
Course: {135,136}
Instructor: <Alex Nikolaev
Assignment: <Lab 5b repeating

Reads your number to see if it is divisible by 9 and then changes the number to be divisible by 9
*/

# include <iostream>
using namespace std;

int numDigit(int ran){		//this function counts how many digits in number inputed
	int counter = 0;		//counter, this will be returned
	while (ran>=10){		//when ran >=10 divide 10 and repeat until 1 digit remains
		ran = ran/10;
		counter++;
	}
	counter=counter+1;		//counter records how many times loop repeated and adds 1 then returns
	return counter;
}

int getsum(int num, int result){
	int sum = 0;
	for(int k = 1; k <= result; k++)	//repeat until you take every digit in number
	{int ph=num;
		for(int i=0;i<result-k+1;i++)		//removing digits by itself
		{
			if(i<result-k){						//dividing you need is at one's place
				ph=ph/10;
			}
			else{ ph=ph%10;				//module to get the remainder getting the number by itself	
			  	sum=ph+sum;				//add the number gotten with previous sums
			}
		}
	}return sum;
}

void makeDivisibleByNine(int &num){
	int ph = num % 10;
	num=num-ph;
	while(num%9!=0)
	{num++;}
	}
	
int main(){

	cout<<"Enter number: ";
	int num = 0;
	cin>>num;

	int result=numDigit(num);
	int sum = 0;
	int digit = getsum(num,result);
	if(digit%9==0){					//this is to see if number inputed is divisible by 9
	cout<<num<<endl;				
	}
	else{							//if it is not divisible by 9, we change the number
	makeDivisibleByNine(num);
	cout<<num<<endl;
	}
}
