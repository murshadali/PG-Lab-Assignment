//8# Write a C++ program to merge two sorted arrays into another array in sorted order.
#include<iostream>
using namespace std;
int main()
{
    int m, n;
	cout<<"Enter array1 size: ";
	cin >> n;
    int array1[n] ;
	cout<<"Enter element of array 1: ";
    for(int i=0; i<n; i++){
        cin>>array1[i];
    }

    cout<<"Enter array2 size: ";
	cin >> m;
    int array2[m] ;
	cout<<"Enter element of array 2: ";
    for(int i=0; i<m; i++){
        cin>>array2[i];
    }


    int i = 0, j = 0, k = 0;
    int merged[m + n];
    
    for(int p=0; p<n-1; p++)
    {
        for(int q=p+1; q<n; q++){
            if(array1[p]>array1[q])
            {
                swap(array1[p],array1[q]);
            }
        }
        
    }
    cout<<"sorted array1:" << endl;
    for(int i=0; i<n; i++){
        cout<< array1[i]<<" ";
    }
    cout<<"\nsorted array2:" << endl;
     for(int p=0; p<m-1; p++)
    {
        for(int q=p+1; q<m; q++){
            if(array2[p]>array2[q])
            {
                swap(array2[p],array2[q]);
            }
        }
        
    }
     
    for(int i=0; i<m; i++){
        cout<< array2[i]<<" ";
    }

    cout<< endl;

    // Merge the arrays
    while (i < m && j < n) {
        if (array1[i] < array2[j]) {
            merged[k++] = array1[i++];
        } else {
            merged[k++] = array2[j++];
        }
    }

    // Copy remaining elements
    while (i < n) {
        merged[k++] = array1[i++];
    }
    while (j < m) {
        merged[k++] = array2[j++];
    }

    cout << "Merged Sorted Array: ";
    for (int l = 0; l < (m + n); l++) {
        cout << merged[l];
        if (l != m + n - 1) cout << ",";
    }
    cout << endl;

    return 0;
}
