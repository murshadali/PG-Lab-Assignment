// 3# Write a C++ Program to print the address of the Variable Using a Pointer
#include <iostream>
using namespace std;
class Address{
	int *ptr;
	public:
		int* address(int &n){
			ptr=&n;
			
			return ptr;
		}
};
int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    Address obj;
    cout << "The address of the variable is: " << obj.address(num) << endl;
    return 0;
}
