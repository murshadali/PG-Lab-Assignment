//2# Write a C++ program to perform the addition of two numbers without using + operator
#include <iostream>
using namespace std;
int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
	int carry=b, sum=a;
    while (carry!= 0) { 
		sum = a^b;
        carry = (a & b)<<1;  
        a =sum;
        b = carry;       
    }

    cout << "Sum: " << sum;
    return 0;
}
