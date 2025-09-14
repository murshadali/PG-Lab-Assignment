/*5# Write a C++ program to generate all the prime numbers between 1 and n, where 
n is a value supplied by the user. */
#include<iostream>
using namespace std;
int main(){
	int n;
	cout<< "Enter value till where you want to print number: ";
	cin>>n;
	for(int i=1; i<n; i++){
		
		int check=1;
		
		for(int j=2; j<=i/2; j++){
			if(i%j==0){	
			check= 0;
			}
		}
		if(check)
		cout<<i <<" ";
	}
	cout<<endl;
	while(1)
	{
		main();
	}
}

