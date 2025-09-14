// 4# Write a C++ program to find the second-largest integer in a list of integers

#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    if (n < 2) {
        cout << "At least two numbers are required.";
        return 0;
    }

    int arr[n];
    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << "\nArray : " << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    int max = arr[0];
    int second_max = INT_MIN;

    // Find the largest element
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    // Find the second largest element
    for (int i = 0; i < n; i++) {
        if (arr[i] != max && arr[i] > second_max) {
            second_max = arr[i];
        }
    }

    if (second_max == INT_MIN) {
        cout << "There is no second largest element (all elements are equal)." << endl;
    } else {
        cout << "Second max: " << second_max << endl;
    }
    return 0;
}
