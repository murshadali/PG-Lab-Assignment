//2# Write a C++ program to find the sum of all the array elements.
#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;
    cout << "Enter the number of elements: ";
    cin >> n;
    int arr[n];
    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    cout << "Sum of array elements: " << sum;
    return 0;
}
