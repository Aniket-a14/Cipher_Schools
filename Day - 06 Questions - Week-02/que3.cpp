// Ques-03 Write a C++ program that takes an array as input and prints the number of odd numbers and the number of even numbers in the array.

// Sample Input:
// Enter the size of the array: 5
// Enter the array elements: 5 10 15 20 25

// Sample Output:
// Number of odd numbers: 3
// Number of even numbers: 2

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int arr[n],odd=0,even=0;
    cout<<"Enter the array elements: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    for(int i=0;i<n;i++){
        if(arr[i]%2==0){even+=1;}
        else{odd+=1;}
    }
    cout<<"Number of odd numbers: "<<odd<<endl;
    cout<<"Number of even numbers: "<<even;
    return 0;
}