// Ques-03 Write a C++ function that takes a string as a parameter and checks how many vowels and consonants are in that string.
// Assuming that string contains only lowercase.

// Sample Input:
// Enter a string: cipherschools

// Sample Output:
// Number of vowels: 4
// Number of consonants: 9

#include<iostream>
using namespace std;

int main(){
    string str;
    getline (cin,str);
    int vowel=0,consonants=0;

    for(int i=0;i<str.length();i++){
        if(str[i]== 'a' || str[i]== 'e' || str[i]== 'i' || str[i]== 'o' || str[i]== 'u'){
            vowel+=1;
        }
        else{
            consonants+=1;
        }
    }
    cout<<"Number of vowels: "<<vowel<<endl;
    cout<<"Number of consonants: "<<consonants<<endl;
    return 0;
}