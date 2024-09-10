#include <iostream>  // This header file contains basic functions like printing, taking user input, etc.
using namespace std;

// If you wnat to import all the libraries in c++, we use the command
#include <bits/stdc++.h>  // We don't even need to write iostream after this


int main() {
    // cout is a function that allows us to give output
    // cout is a function under the std 
    std::cout << "Hello World";

    // To add newline we write
    std::cout << "Hello World" << "\n";
    // we can also use "std::endl", it is similar to '\n' (\n is faster)
    std::cout << "Hi" << std::endl << "Can print again" << "And again" << std::endl;

    // It you dont want to write 'std' again and again, we write namespace like in line 2 
    // Above statements will run even if we dont write line 2
    // Line 2 makes it so that the program always uses std for all the function
    cout << "This is also printed without writing std in function call" << '\n';


    // Taking user imput using 'cin' function
    int x;
    cin >> x;
    cout << "Value of x: " << x << '\n';

    // To take more than one imputs
    int a, b;
    cin >> a >> b;
    cout << "a: " << a << "\nb: " << b << '\n'; 
    

    return 0;
}