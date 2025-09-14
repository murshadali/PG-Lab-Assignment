/*6# A character is entered through keyboard. Write a C++ program to determine
whether the character entered is a capital letter, a small case letter, a digit or a
special symbol using if-else and switch case. The following table shows the
Department of Computer Science/Lab Manual/CAMS-1P01 Page 35
range of ASCII values for various characters.
Characters ASCII values A – Z: 65 – 90, a – z: 97 – 122, 0 – 9: 48 – 57
Special symbols 0 – 47, 58 – 64, 91 – 96, 123 – 127*/

#include<iostream>
using namespace std;
int main(){
    char character;
    cout<< "enter the character: ";
    cin>> character;
    if(65 <= int(character) && int(character)<=90){
        cout<< "capital letter: "<<character;
    }
     else if(97<=int(character) && int(character)<=122)
    {
        cout<< "Small letter: "<<character<<endl;
    }
    else if(48<=int(character)&& int(character)<=57)
    {
        cout<<"Number: " << character <<endl;
    }
    else if((0<= int(character)&& int(character)<=47) || (91<= int(character)&& int(character)<=96)|| (123<= int(character)&& int(character)<=127) ){
        cout<<"Special character: "<< character <<endl;
    }
    return 0;
}