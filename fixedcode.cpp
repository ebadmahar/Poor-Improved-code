#include <iostream>
using namespace std;

int main() {
    int a, b; // Fixed: added semicolon
    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter second number: ";
    cin >> b;
    cout << "Sum is: " << a + b << endl; // Fixed: added semicolon
    cout << "Difference is: " << a - b << endl;
    return 0; // Fixed: added semicolon
}