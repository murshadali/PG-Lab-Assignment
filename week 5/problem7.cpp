// 7# Write a C++ program to count and display positive, negative, odd, and even numbers in an array.
#include<iostream>
using namespace std;

int main()
{
	int n,i,num,find=0, positive=0,negative=0,odd=0,even=0;
	cout<<"Enter size of array: ";
	cin>> n;
	int array[n];
	cout<<"Enter elements of array:";
	for(i=0;i<n;i++)
	{
		cin>>array[i];
	}
	
	for(i=0;i<n;i++)
	{
		if(array[i]>0)
		{
			positive++;
		}
		else if(array[i]<0)
		{
			negative++;
		}
		
		if(array[i]%2==0&& array[i]!=0)
		{
			even++;
		}
		else if(array[i]!=0)
		{
			odd++;
		}
	}
	
	cout<<"Positive Numbers: "<<positive<<endl;
	cout<<"Negative Numbers: "<<negative<<endl;
	cout<<"Even Numbers: "<<even<<endl;
	cout<<"Odd Numbers: "<<odd;	
}

