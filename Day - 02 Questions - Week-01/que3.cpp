// Ques-03: Write a C++ program that takes an integer as input from the user and prints the corresponding month of the year using a switch case statement. Assume 1 = January, 2 = February, ..., 12 = December.If integer is not from 1 to 12 then print invalid.

// Sample Input:-Enter a number : 5
// Sample Output :- The month is: May"

#include<iostream>
using namespace std;
 
int main(){
    int choice;
    cout<<"Enter a number: ";
    cin>>choice;
    switch (choice)
    {
    case 1:
        cout<<"The month is: January ";
        break;
    case 2:
        cout<<"The month is: February ";
        break;
    case 3:
        cout<<"The month is: March ";
        break;
    case 4:
        cout<<"The month is: April ";
        break;
    case 5:
        cout<<"The month is: May ";
        break;
    case 6:
        cout<<"The month is: June ";
        break;
    case 7:
        cout<<"The month is: July ";
        break;
    case 8:
        cout<<"The month is: August ";
        break;
    case 9:
        cout<<"The month is: September ";
        break;
    case 10:
        cout<<"The month is: October ";
        break;
    case 11:
        cout<<"The month is: November ";
        break;
    case 12:
        cout<<"The month is: December ";
        break;
    default:
        cout<<"Invalid";
        break;
    }
}