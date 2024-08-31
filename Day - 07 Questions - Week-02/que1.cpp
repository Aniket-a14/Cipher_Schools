// Ques-01 Write C++ program that take array from the user and sort the array using bubble sort algorithm.

// Input:
// N = 5
// arr[] = {4, 1, 3, 9, 7}

// Output:
// 1 3 4 7 9


#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"N: ";
    cin>>n;
    int arr[n];
    cout<<"arr[] =";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }

    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
}