// Ques 1: Write a function int stringLength(const std::string &str) that returns the length of a given string. Test your function with various strings in the main() function.

// Sample Input:- str1 = "Hello, World!"
// Output:- 13


#include<iostream>
using namespace std;

int stringlength(string str){
    return str.length();
}

int main(){
    string str;
    getline(cin,str);
    int len=stringlength(str);
    cout<<len;
    return 0;
}

