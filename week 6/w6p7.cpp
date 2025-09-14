/*7# Write a program for reading elements using a pointer into an array and display the
values using an array.
i. Declare a set of elements.

ii. Declare the pointer and initialize it to the first      element's address of a set of elements (array).

iii. Repeat the loop until the pointer reaches to the last element and displays each element.*/
#include <iostream>
using namespace std;
class Array{
    private:
        int arr[5];
        int* ptr = arr;
    public:
        void getvalue(){
             cout << "Enter 5 elements:" << endl;
            for (int i = 0; i < 5; i++) {
                cin >> *(ptr + i);
            }
        }
        void display(){
            cout << "Array elements are:" << endl;
            for (int i = 0; i < 5; i++) {
            cout << arr[i] << " ";
            }
        }
};

int main() {
    Array obj;
    obj.getvalue();
    obj.display();

    return 0;
}