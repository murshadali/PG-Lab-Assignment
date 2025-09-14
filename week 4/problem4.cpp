/*4#  A Fibonacci sequence is defined as follows: The first and second terms in the 
sequence are 0 and 1. Subsequent terms are found by adding the preceding two 
terms in the sequence. Write a C++ program to generate the first n terms of the 
sequence. */
#include<iostream>
using namespace std;
int main(){
	int x =0, y=1;
	int term ;
	cout<<"How many term you want?: "<<endl;
	cin>> term;
	for(int i=0; i<term; i++)
	{
		cout<<x << " "; 
		int sum = y+x;
		y =x;
		x=sum;
	}
}
