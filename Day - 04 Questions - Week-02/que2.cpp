// Ques-02: Create a Complex class to represent complex numbers and overload the +, -, operators to perform arithmetic operations on complex numbers.

// Sample Output:-

// Complex Number 1: 3 + 4i
// Complex Number 2: 1 + 2i
// Sum: 4 + 6i
// Difference: 2 + 2i

#include <iostream>
using namespace  std;

class Complex {
    double real;
    double imag;

    public:
    Complex(double r = 0.0, double i = 0.0) : real(r), imag(i) {}

    Complex operator+(const Complex& other){
        return Complex(real + other.real, imag + other.imag);
    }

    Complex operator-(const Complex& other){
        return Complex(real - other.real, imag - other.imag);
    }

    void display(){
        cout << real << " + " << imag << "i" << std::endl;
    }
};

int main() {
    double a,b,c,d;
    cout<<"Enter real part: ";
    cin>>a;
    cout<<"Enter imaginary part: ";
    cin>>b;
    Complex c1(a,b);
    cout<<"Enter real part: ";
    cin>>c;
    cout<<"Enter imaginary part: ";
    cin>>d;
    
    Complex c2(c,d);

    Complex sum = c1 + c2;
    Complex difference = c1 - c2;

    cout << "Sum: ";
    sum.display();

    cout << "Difference: ";
    difference.display();

    return 0;
}
