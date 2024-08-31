// Ques-02 Write a C++ program that takes an array as input and prints the sum of odd numbers and the sum of even numbers separately.

// Sample Input:
// Enter the size of the array: 5
// Enter the array: 5 10 15 20 25

// Sample Output:
// Sum of odd numbers: 45
// Sum of even numbers: 30

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int arr[n],odd=0,even=0;
    cout<<"Enter the array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    for(int i=0;i<n;i++){
        if(arr[i]%2==0){even+=arr[i];}
        else{odd+=arr[i];}
    }
    cout<<"Sum of odd numbers: "<<odd<<endl;
    cout<<"Sum of even numbers: "<<even<<endl;
    return 0;
}