// 9# Write a C++ program to find the frequency of a particular number in a list of integers.
#include <iostream>
using namespace std;
int main() {
    int n, num, count = 0;
    cout << "Enter the size of the list: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the list: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << "Enter the number to find its frequency: ";
    cin >> num;
    for(int i = 0; i < n; i++) {
        if(arr[i] == num) {
            count++;
        }
    }
    if(count>0){
        cout << "Frequency of " << num << " is: " << count << endl;
    }
    else{
        cout<<"number does not exsist in this list";
    }
    return 0;
    
}
