// 4# Write a C++ Program for Increment and Decrement an Integer Using a Pointer.

#include <iostream>
using namespace std;
class Inc_Dec_Class{
	int* ptr;
	public:
		// Increment using pointer
		void increment(int&num){
			ptr=&num;
			(*ptr)++;
		}
		 // Decrement using pointer
		void decrementt(int &num){
			ptr=&num;
			(*ptr)--;
		}
};

int main() {
    int num;

    cout << "Enter an integer: ";
    cin >> num;
    Inc_Dec_Class obj;
    obj.increment(num);
    cout << "After increment: " << num << endl;
    obj.decrementt(num);
    cout << "After decrement: " << num << endl;

    return 0;
}
