#include <bits/stdc++.h>
using namespace std;

int main() {
    // If-else if-else statements are same as of C
    int age = 24;
    if (age <= 18) {
        cout << "Teen\n";
    }
    else if (age <= 60) {
        cout << "Adult\n";
    }
    else {
        cout << "Senior Citizen\n";
    }

    // Switch statement is also same
    int day = 3;
    switch (day) {
        case 1:
            cout << "Monday\n";
            break;
        case 2:
            cout << "Tuesday\n";
            break;
        case 3:
            cout << "Wednesday\n";
            break;
        case 4:
            cout << "Thursday\n";
            break;
        case 5:
            cout << "Friday\n";
            break;
        case 6:
            cout << "Saturday\n";
            break;
        case 7:
            cout << "Sunday\n";
            break;
        default:
            cout << "Invalid day!\n";
        
        // Note that without break the default statement will always run
    }
}