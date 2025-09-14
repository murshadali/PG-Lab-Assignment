// 8# Write a C++ program to check whether a given 3-digit number is an Armstrong number.
#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int num, result=0, remainder;
    cout<< "Enter three digit number: ";
    cin>> num;
    int temp_num = num;

    while(temp_num !=0){
        remainder = temp_num % 10;
        result = result + pow(remainder,3);
        temp_num/=10;
    }
    if(result==num){
        cout<< num <<  " number is Armstrong";
    }
    else{
        cout<<num <<  " number is not Armstrong"; 
    }
}