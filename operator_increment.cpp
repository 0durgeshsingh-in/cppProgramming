   #include <iostream>
   using namespace std
    int main() {
        int a = 5; 
        // Prefix increment
        cout << "Prefix Increment: " << ++a << endl; // Outputs 6 (a is now 6)
        // Postfix increment
        cout << "Postfix Increment: " << a++ << endl; // Outputs 6 (a becomes 7 after this line)
        cout << "Final Value of a: " << a << endl; // Outputs 7
        return 0;
    }
