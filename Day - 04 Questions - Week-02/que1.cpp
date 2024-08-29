// Ques:01: Write a C++ program that takes two integers as input and performs the following arithmetic operations:
// Addition
// Subtraction
// Multiplication
// Division (ensure that you handle division by zero)
// Modulus

// Sample Output :-

// Enter first integer: 10
// Enter second integer: 3
// Addition: 13
// Subtraction: 7
// Multiplication: 30
// Division: 3.33333
// Modulus: 1

#include<iostream>
using namespace std;

int main(){
    int a,b;
    cout<<"Enter first integer: ";
    cin>>a;
    cout<<"Enter second integer: ";
    cin>>b;
    cout<<a+b<<endl;
    cout<<a-b<<endl;
    cout<<a*b<<endl;
    if(a>0 && b>0){cout<<float(a)/float(b)<<endl;}
    else{cout<<"divison not possible!"<<endl;}
    if(a>0 && b>0){cout<<a%b<<endl;}
    else{cout<<"divison not possible!"<<endl;}
    return 0;
}

// Ques-02: Create a Complex class to represent complex numbers and overload the +, -, operators to perform arithmetic operations on complex numbers.

// Sample Output:-

// Complex Number 1: 3 + 4i
// Complex Number 2: 1 + 2i
// Sum: 4 + 6i
// Difference: 2 + 2i

