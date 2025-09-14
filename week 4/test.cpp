#include<iostream>
using namespace std;
int main(){
	int arr[5]={2,4,7,6,5};
	int a[4]= {1,2,3,6};
	int b[5]={4,7,8,10,11};
	int first= INT_MIN;
	int second=INT_MIN;
	for(int i=0; i<5; i++){
		if(arr[i]>first){
			second = first;
			first = arr[i];
		}
		else if(arr[i]> second&& arr[i]!=first){
			second = arr[i];
		}
	}
	cout<< second<<endl;
	
	for(int i=0; i<5; i++){
		for(int j=i+1; j<5; j++){
			if(arr[i]>arr[j]){
				swap(arr[i],arr[j]);
			}
		}
	}
	for(int i=0; i<5; i++){
		cout<< arr[i]<<" ";
	}
	
	
	
	int n=4;
	int m=5;
	int i=0, j=0,k=0;
	int c[n+m];
	while(i<n&& j&&m){
		if(a[i]<a[j]){
			c[k++]=arr[i];
			i++;
		}
		else{
			c[k++]= b[j++];
		}
	}
	while(i<n){
		c[k++]=a[i++];
	}
	while(j<m){
		c[k++]=b[j++];
	}
	cout<<endl;
	for(int p=0; p<n+m; p++){
		cout<<c[p]<<" ";
	}  
	
}
