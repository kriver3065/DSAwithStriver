#include <bits/stdc++.h>
using namespace std;


// To make a function to take value by reference we write it as
void func(string &str1) { // Same can be done with integer and other data types 
    str1[0] = 't';
    cout << str1 << '\n';
}
// The '&' sign tells to take the address of the variable passed


int main() {
    // Even the string data type is passed by value inside a function




    string str = "raj";
    func(str);  // Simply pass the variable here
    cout << str << '\n';

    // Array is generally passed by reference
    // Define function as
    // void func(int arr[]) { ... }
    
}


