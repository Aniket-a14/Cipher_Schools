// "Write a C++ program that takes an integer N as input from the user and prints the multiplication table of N up to 10 using a loop.

// Sample Input:- Enter a number: 3

// Sample Output:-
// Multiplication table of 3:
// 3 x 1 = 3
// 3 x 2 = 6
// 3 x 3 = 9
// 3 x 4 = 12
// 3 x 5 = 15
// 3 x 6 = 18
// 3 x 7 = 21
// 3 x 8 = 24
// 3 x 9 = 27
// 3 x 10 = 30"

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    for(int i=1;i<=10;i++){
        cout<<n<<" x "<<i<<" = "<<n*i<<endl;
    }
    return 0;
}