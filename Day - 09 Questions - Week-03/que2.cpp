// Ques 2: Write a program that declares an array of integers and a pointer that points to the first element of the array. Use pointer arithmetic to print all the elements of the array.

#include<iostream>
using namespace std;

int main(){
    int arr[]={1,2,3,4,5,6};
    int * ptr=&arr[0];
    for(int i=0;i<6;i++){
        cout<<ptr[i]<<" ";
    }
    return 0;
}
