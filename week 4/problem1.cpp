//1# Write a C++ program to check whether a number is even or odd using ternary operator
#include<iostream>
using namespace std; 
bool check_method(int num){
	return num%2==0? true: false;
	
}
int main(){
	int num; 
	cout<<"Enter number: ";
	cin>> num;
	if(num>0){
		
		check_method(num)? cout<<num << " is even number.": cout<< num <<" is an odd number!!";
	}
	else{
		cout<<"Enter the positive number!";
	}
}
