// 6# Write a C++ program to concatenate two strings using pointers.
#include <iostream>
using namespace std;
class Concatente{
    private: 
    char result[200];
    char *p1, *p2, *p3;
    public:
        char* concatenate(char str1[], char str2[]){
                p1 = str1;
                p2 = str2;
                p3 = result;
                // yeha copy ker rhe hai
                while(*p1!='\0'){
                    *p3=*p1;
                     p1++;
                     p3++;
                }

                while (*p2 != '\0') {
                    *p3 = *p2;
                    p3++;
                    p2++;
                 }
                 *p3='\0';
                 return result;

        }
        
};
int main() {
    char str1[100], str2[100];
   

    cout << "Enter first string: ";
    cin>>str1;

    cout << "Enter second string: ";
    cin>> str2;
    Concatente obj;
   

    cout << "Concatenated string: " << obj.concatenate(str1,str2) << endl;

    return 0;
}