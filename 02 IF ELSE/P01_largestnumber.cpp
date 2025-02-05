/*
  Program 01:
  Program to accept three integers and print the largest of the three.
  Make use of only if statement.
*/

#include <iostream>
using namespace std;

int main() {
    int firstNumber, secondNumber, thirdNumber, maxNumber;

    cout << "Insert Three Numbers: ";
    cin >> firstNumber >> secondNumber >> thirdNumber;

    maxNumber = firstNumber;

    if (secondNumber > maxNumber) {
        maxNumber = secondNumber;
    }

    if (thirdNumber > maxNumber) {
        maxNumber = thirdNumber;
    }

    cout << endl << "The Largest Number of " << firstNumber << ", " << secondNumber << ", and " << thirdNumber
         << " is " << maxNumber << endl;

    return 0;
}


