// 8# Write a program using a pointer variable to the sum of n elements from the array.
#include <iostream>
using namespace std;
class arraySum {
    int *p;
    int result=0;
    public:
        int sum(int arr[], int size){
            p= arr;
            for (int i = 0; i < size; i++) {
                result += *(p + i);
            }
            return result;
        }

};
int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];
    int* ptr = arr;
    cout << "Enter " << n << " elements:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> *(ptr + i);
    }

    arraySum obj;
    

    cout << "Sum of array elements: " <<obj.sum(arr,n) << endl;

    return 0;
}