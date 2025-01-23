#include <iostream>
using namespace std;

int main(){
    int a = 10;
    int b = 5;

    // Basic Arithmetic
    cout << "Addition : " << (a+b) << endl;
    cout << "Subtraction: " << (a - b) << endl;
    cout << "Multiplication: " << (a * b) << endl;
    cout << "Division: " << (a / b) << endl;
    cout << "Modulus: " << (a % b) << endl;

    // Increment and decrement
    cout << "Pre-increment: " << (++a) << endl;
    cout << "Post-increment: " << (a++) << endl;
    cout << "After post-increment: " << a << endl;
    cout << "Pre-decrement: " << (--b) << endl;
    cout << "Post-decrement: " << (b--) << endl;
    cout << "After post-decrement: " << b << endl;


    return 0;
}
// Output Result
// Addition : 15
// Subtraction: 5
// Multiplication: 50
// Division: 2
// Modulus: 0
// Pre-increment: 11
// Post-increment: 11
// After post-increment: 12
// Pre-decrement: 4
// Post-decrement: 4
// After post-decrement: 3
