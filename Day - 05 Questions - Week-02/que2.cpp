// Ques-02 Write a C++ function that takes a string as input and reverses it.

// Sample Input:
// Enter a string: CipherSchools

// Sample Output:
// Reversed string: sloohcSrehpiC


#include <iostream>
using namespace std;


int main(){
    string str;
    getline (cin,str);

    for(int i=str.length();i>=0;i--){
        cout<<str[i];
    }
    return 0;
}