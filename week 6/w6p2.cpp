// 2# Write a C++ Example Program for swapping numbers Using Pointers.
#include <iostream>
using namespace std;
class Swap{
	int *ptr1, *ptr2;
	int temp;
	public:
		void swap(int&num1, int&num2){
			ptr1 = &num1;
    		ptr2 = &num2;
    		
    		temp = *ptr1;
		    *ptr1 = *ptr2;
		    *ptr2 = temp;
		}
};
int main() {
    int num1, num2, temp;
    

    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;
    Swap obj;
    obj.swap(num1,num2);

    // Swapping using pointers
    

    cout << "After swapping:" << endl;
    cout << "First number = " << num1 << endl;
    cout << "Second number = " << num2 << endl;

    return 0;
}
