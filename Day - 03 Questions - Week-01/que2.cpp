// Ques-02: Write a C++ program that takes an integer N as input from the user and calculates the factorial of N using a loop.

// Sample Input:- Enter a number: 4
// Sample Output:- The factorial of 4 is: 24

#include<iostream>
using namespace  std;

int fact(int n){
    if(n==0 || n==1){
        return 1;
    }
    else{
        return n*fact(n-1);
    }
}


int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    int a= fact(n);
    cout<<"The factorial of "<<n<<" is: "<<a;
    return 0;
}