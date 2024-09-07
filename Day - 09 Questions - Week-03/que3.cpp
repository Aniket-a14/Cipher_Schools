// Ques 3: Create a program that demonstrates the use of a pointer to a pointer. Declare an integer variable, a pointer to the integer, and a pointer to that pointer. Use all three to print the value of the integer.

#include<iostream>
using namespace std;

int main(){
    int var;
    cin>>var;
    int *ptr=&var;
    int **ptr2=&ptr;
    cout<<var<<" "<<*ptr<<" "<<ptr<<" "<<**ptr2<<" "<<ptr2;
    return 0;
}