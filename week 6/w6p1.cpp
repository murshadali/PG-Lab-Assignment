// 1# Write a C++ Program to Add Two Numbers Using a Pointer.
#include <iostream>
using namespace std;
class Addition{
	int *ptr1;
    int *ptr2;
    int result;
    public:
    	int sum(int num1,int num2)
    	{
    		ptr1=&num1;
    		ptr2=&num2;
    		result = (*ptr1) + (*ptr2);
    		return result;
		}
    
};
int main() {
    int num1, num2;
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;
    Addition obj;
    int result= obj.sum(num1,num2);
    
    cout << "Sum: "<<result;

    return 0;
}
