    #include <iostream>
    using namespace std;
    
    int main() {
        int a = 5, b = -3;
        // Logical AND
        cout << (a > 0 && b > 0) << endl;  // Output: 0 (false)
        // Logical OR
        cout << (a > 0 || b > 0) << endl;  // Output: 1 (true)
        // Logical NOT
        cout << !(a > 0) << endl;          // Output: 0 (false)
        return 0;
    }
