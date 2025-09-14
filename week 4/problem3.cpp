/*3# Write a C++ program to evaluate the arithmetic expression ((a + b / c * d - e) 
* (f - g)). Read the values a, b, c, d, e, f, g from the standard input device.*/

#include<iostream>
using namespace std;
int main(){
	int a,b,c,d,e,f,g;
	cout<<"Enter value of these varibles (a,b,c,d,e,f,g): ";
	cin>>a>>b>>c>>d>>e>>f>>g; 
	float result = (a+b/c*d-e)*(f-g);
	cout<<"final result: "<<result;
}
