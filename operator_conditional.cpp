  #include <iostream>
  using namespace std;

  int main() {
      int a = 10, b = 20;
  
      // Using conditional operator
      int max = (a > b) ? a : b;
  
      cout << "The larger number is: " << max << endl; // Output : The larger number is: 20
      return 0;
  }
