#include <bits/stdc++.h>
using namespace std;

int main() {
    // int, long
    int var1 = 29381233;
    long var2 = 3829839839823917223;

    // For very large data, there is another data type
    long long sp_var = 271673718724;


    // Float & double
    float v1 = 23.89;
    double v2 = 3.141;


    // String
    string str1;
    cin >> str1;
    cout << str1 << '\n';

    // Note that 'cin' take input till a white space, so if a string contains space, it will only take input before a space
    // So in that case, we can use getline() function
    getline(cin, str1);
    cout << str1 << '\n';

    // To get the length of string, we can use .size attribute
    cout << str1.size() << '\n';
}