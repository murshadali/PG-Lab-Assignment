//5# Write a C++ Program to reverse the position of the array element (Hint: First element to 
//the last element.) 

#include<iostream>
using namespace std;

int main()
{
	int array[5],i,x; // input array
	cout<<"Enter 5 elements of array:";
	for(i=0;i<5;i++)
	{
		cin>>array[i];
	}
	
	for(i=0;i<5/2;i++) //reversing
	{
		x=array[i];
		array[i]=array[5-1-i];
		array[5-1-i]=x;
	}
	
	cout<<"Reverse Array Elements:";
	for(i=0;i<5;i++) //printing array;
	{
		cout<<array[i]<<",";
	}		
}

