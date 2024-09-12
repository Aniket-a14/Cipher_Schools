// Write C++ program to demonstrate how to create dynamic variable using new keyword.

#include <iostream>
using namespace std;

int main() {
    int* ptr = new int; 

    *ptr = 69;
    cout << "Value: " << *ptr << endl;
    delete ptr;

    ptr = NULL;

    return 0;
}
