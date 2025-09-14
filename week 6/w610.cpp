// 10# Write a C++ program to reverse a string using pointers (simple way).
#include <iostream>
#include<cstring>
using namespace std;
class Rev_str{
    char *end;
    char *start;

    public:
        void reverse(char  str[]){
            start = str;
            end = str + strlen(str)-1;

            while(start < end){
                char temp = *start;
                *start=*end;
                *end= temp;
                start++;
                end--;
            }

        }
    
};
int main() {
    char str[100];
    cout << "Enter a string: ";
    cin.getline(str, 100);

    cout << "Reversed string: ";
    Rev_str obj;
    obj.reverse(str);
    cout<< str;
    return 0;
}







    // int len = strlen(str);
    // char *start = str;
    // char *end = str + len - 1;

    // // Reverse the string using pointers
    // while (start < end) {
    //     char temp = *start;
    //     *start = *end;
    //     *end = temp;
    //     start++;
    //     end--;
    // }

    // cout << "Reversed string: " << str << endl;