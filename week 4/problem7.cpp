// 7# Write a C++ program to find the roots of a quadratic

#include<iostream>
#include<cmath>
using namespace std;
int main(){
    double a, b, c, root1, root2;
    cout<< "Enter cofficients a, b, c: ";
    cin>>a>>b>> c;
    double dis = b*b-4*a*c;
    if(dis>0)
    {
        root1 = (-b+sqrt(dis))/(2*a);
        root2 = (-b-sqrt(dis))/(2*a);
        cout<< "Two distinct real roots: "<< root1<< ", "<<root2 << endl;
    }
    else if(dis==0){
        root1 = -b/(2*a);
        cout<< "one real root: "<< root1<< endl;
    }
    else{
        cout<< "oh no! not have a real roots "<< endl;
    }
}