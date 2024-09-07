// Ques 2: Write a function bool isPalindrome(const std::string &str) that checks whether a given string is a palindrome (a word, phrase, or sequence that reads the same backward as forward). The function should ignore spaces, punctuation, and case sensitivity. Test your function with various strings in the main() function.

// Example:

// Input: "A man, a plan, a canal, Panama"
// Output: true

#include <iostream>
#include <string>
#include <cctype> 

using namespace std;

bool isPalindrome(const string &str) {
    string Str;
    for (char c : str) {
        if (isalnum(static_cast<unsigned char>(c))) {
            Str += tolower(static_cast<unsigned char>(c));
        }
    }

    
    int left = 0;
    int right = Str.length() - 1;

    while (left < right) {
        if (Str[left] != Str[right]) {
            return false; 
        }
        ++left;
        --right;
    }

    return true;
}

int main() {
    string str;
    getline(cin,str);

    cout << "Input: \"" << str << "\"\n";
    cout << "Output: " << (isPalindrome(str) ? "true" : "false") << "\n";

    return 0;
}
