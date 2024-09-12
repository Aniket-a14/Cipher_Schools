// Ques 1: Define a car class with properties brand name , model, engine, number of seats and method displayInfo that display the all information of class.

#include <iostream>
using namespace std;

class car
{
public:
    string brand_name, model, engine;
    int seat;
    void displayInfo()
    {
        cout << brand_name << " " << model << " " << engine << " " << seat;
    }
};

int main()
{
    car c1;
    c1.brand_name = "Mcleren";
    c1.model = "Mcleren P1";
    c1.engine = "V12";
    c1.seat = 4;
    c1.displayInfo();
    return 0;
}

// Ques 2: Write a program that defines a Rectangle class with a copy constructor