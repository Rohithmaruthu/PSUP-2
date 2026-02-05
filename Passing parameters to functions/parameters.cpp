#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void increment(int num) {
    num++;
    cout << "Inside function: " << num << endl; // Output will be 6
}

void doubleValue(int &a) {
    a *= 2;
    cout << "Inside function: " << a << endl; // Output will be 10
}

void addFive(int *ptr) {
    *ptr += 5;
    cout << "Inside function: " << *ptr << endl; // Output will be original value + 5
}

int main() {
    // Enter your code below

    // passing by value
    int num = 5;
    increment(num); // passes a copy of num into the function
    
    cout << "Outside function: " << num << endl; // Output will be 5, not 6
    // original value of num doesn't change.

    // passing by reference
    int a = 5;
    doubleValue(a); // passes the element 'a' to the function.
    // so the original value of 'a' changes.
    cout << "Outside function: " << a << endl; // Output will be 10, original value of a changes.

    // passing by pointer

    int value = 10;
    addFive(&value); // passes the address of value to the function
    // so the original value of 'value' changes.
    cout << "Outside function: " << value << endl; // Output will be 15, original value of value changes.


    return 0;
}