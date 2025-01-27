    #include <iostream>
    using namespace std;  
    int main() {
        int b = 10;
        // Prefix decrement
        cout << "Prefix Decrement: " << --b << endl; // Outputs 9 (b is now 9)
        // Postfix decrement
        cout << "Postfix Decrement: " << b-- << endl; // Outputs 9 (b becomes 8 after this line)
        cout << "Final Value of b: " << b << endl; // Outputs 8
        return 0;
    }
