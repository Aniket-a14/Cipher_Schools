// Ques 2: Implement a function int countCharacter(const std::string &str, char ch) that counts the number of occurrences of a specific character in a given string. Test the function with different strings and characters.

// Sample Input:- String ="Hello, World!"
// character=’l’
// Output:- 3

#include<iostream>
using namespace std;

int countCharacter(string str, char ch){
    int count=0;
    for(int i=0;i<str.length();i++){
        if(ch==str[i]){
            count+=1;
        }
    }
    return count;
}

int main(){
    string str;
    char ch;
    getline(cin,str);
    cin>>ch;
    int count=countCharacter(str,ch);
    cout<<count;
    return 0;
}

// Ques 3: Write a function std::string concatenateStrings(const std::string &str1, const std::string &str2) that concatenates two strings and returns the result. Test the function with various input strings.

// Sample Input : - str1 = "Hello, "
// str2 = "World!"

// Sample Output :- "Hello, World!"
