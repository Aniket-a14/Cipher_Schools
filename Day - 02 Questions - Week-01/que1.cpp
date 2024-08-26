// Ques-01: Write a C++ program that takes three integers as input from the user and determines the largest of the three using if-else statements.

// Sample Input:- Enter the first number: 10
// Enter the second number: 20
// Enter the third number: 15

// Sample Output :- The largest number is: 20


#include <iostream>
using namespace std;

int main(){
    int n1,n2,n3;
    cout<<"Enter the first number: ";
    cin>>n1;
    cout<<"Enter the second number: ";
    cin>>n2;
    cout<<"Enter the third number: ";
    cin>>n3;
    if(n1>n2 && n1>n3){
        cout<<"The largest number is: "<<n1;
    }
    else if (n2>n1 && n2>n3)
    {
        cout<<"The largest number is: "<<n2;
    }
    else{
        cout<<"The largest number is: "<<n3;
    }
    return 0;
    
}
