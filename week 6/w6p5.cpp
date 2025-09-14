// 5# Write a C++ Program to Print a String Using a Pointer.
#include <iostream>
using namespace std;
class Print{
	char*ptr;
	public:
		void print(char*str)
		{
			ptr=str;
			while(*ptr!='\0'){
				cout<<*ptr;
				ptr++;
			}
		}
};
int main() {
    char str[100];
    cout << "Enter a string: ";
    cin>>str;
    Print obj;
    cout << "The string is: ";
    obj.print(str);


    return 0;
}
