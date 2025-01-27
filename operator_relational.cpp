#include <iostream>
using namespace std;
int main() {
    int a = 5, b = 10;
    cout << (a == b) << endl;  // Output: 0 (false)
    cout << (a != b) << endl;  // Output: 1 (true)
    cout << (a < b) << endl;   // Output: 1 (true)
    cout << (a > b) << endl;   // Output: 0 (false)
    cout << (a <= b) << endl;  // Output: 1 (true)
    cout << (a >= b) << endl;  // Output: 0 (false)
    return 0;
}
