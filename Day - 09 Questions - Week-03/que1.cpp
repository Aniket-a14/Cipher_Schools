// Ques 1: Write a C++ program that declares an integer variable, initializes it, and then declares a pointer that stores the address of this variable. Print the value of the variable using both the variable itself and the pointer.

#include<iostream>
using namespace std;

int main(){
    int var;
    cin>>var;
    int* ptr=&var;
    cout<<var<<" "<<ptr<<" "<<*ptr;
    return 0;
}

// Ques 2: Write a program that declares an array of integers and a pointer that points to the first element of the array. Use pointer arithmetic to print all the elements of the array.

// Ques 3: Create a program that demonstrates the use of a pointer to a pointer. Declare an integer variable, a pointer to the integer, and a pointer to that pointer. Use all three to print the value of the integer.