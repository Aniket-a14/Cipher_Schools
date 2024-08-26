// Ques-02: Write a C++ program that takes an integer score (0-100) as input from the user and prints the corresponding grade using if-else-if statements.
// Grade Criteria:
// A: 90-100
// B: 80-89
// C: 70-79
// D: 60-69
// F: 0-59

// Sample Input:- Enter the score: 85
// Sample Output:- Grade: B"

#include<iostream>
using namespace std;

int main(){
    int grade;
    cout<<"Enter the score: ";
    cin>>grade;
    if(grade>=90 && grade<=100){cout<<"Grade A";}
    if(grade>=80 && grade<90){cout<<"Grade B";}
    if(grade>=70 && grade<80){cout<<"Grade C";}
    if(grade>=60 && grade<70){cout<<"Grade D";}
    if(grade>=0 && grade<60){cout<<"Grade F";}
}

// Ques-03: Write a C++ program that takes an integer as input from the user and prints the corresponding month of the year using a switch case statement. Assume 1 = January, 2 = February, ..., 12 = December.If integer is not from 1 to 12 then print invalid.

// Sample Input:-Enter a number : 5
// Sample Output :- The month is: May"