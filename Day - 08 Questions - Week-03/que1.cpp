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

// Ques 2: Implement a function int countCharacter(const std::string &str, char ch) that counts the number of occurrences of a specific character in a given string. Test the function with different strings and characters.

// Sample Input:- String ="Hello, World!"
// character=’l’
// Output:- 3


// Ques 3: Write a function std::string concatenateStrings(const std::string &str1, const std::string &str2) that concatenates two strings and returns the result. Test the function with various input strings.

// Sample Input : - str1 = "Hello, "
// str2 = "World!"

// Sample Output :- "Hello, World!"
