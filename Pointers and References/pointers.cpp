#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    // Enter your code below

    // a pointer is a variable that stores the memory address of another variable.

    int *ptr;
    int x = 10;
    ptr = &x;

    cout << *ptr;

    // normal pointer:
    // they are declared using the * operator and can point to any data type.

    // void pointer:
    // they are declared using the void keyword and can point to any data type, but they cannot be dereferenced directly.

    


    return 0;
}