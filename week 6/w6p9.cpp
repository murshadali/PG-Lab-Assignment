// 9# Write a program for reading elements using a pointer into the array and display the values using an array.
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