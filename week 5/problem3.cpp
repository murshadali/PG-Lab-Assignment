// 3# Write a C++ program to find the length of the array.

#include <iostream>
using namespace std;

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int length = sizeof(arr) / sizeof(arr[0]);
    cout << "Length of the array: " << length;
    return 0;
}
