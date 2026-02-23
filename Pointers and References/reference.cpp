#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    // Enter your code below

    int x = 10;

    int &ref = x; // ref is a reference to x

    cout << "Value of x: " << x << endl; // Output will be 10
    cout << "Value of ref: " << ref << endl; // Output will be 10
    printf("VAlue of x: %d\n", x); // Output will be 10

    return 0;
}