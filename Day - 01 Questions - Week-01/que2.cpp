// Ques-02 Write a C++ program that takes five grades (integers) as input from the user and calculates the average grade. Output the average grade to the user.

// Sample Input:- Enter grade 1: 85
// Enter grade 2: 90
// Enter grade 3: 78
// Enter grade 4: 92
// Enter grade 5: 88

// Sample Output:- The average grade is: 86.6

#include<iostream>
using namespace std;

int main(){
    float sum=0;
    for(int i=1;i<=5;i++){
        int n;
        cout<<"Enter grade "<<i<<": ";
        cin>>n;
        sum+=n;
    }
    cout<<"The average grade is: "<<sum/5;
    return 0;
}