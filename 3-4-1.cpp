// Lab 01 section 3.4.1

// Ternary operator
// Write a program that loops indefinitely. In each iteration of the loop,
// read in an integer N (declared as an int) that is inputted by a user,
// output N/5 if N is nonnegative and divisible by 5, and -1 otherwise.
// Use the ternary operator (?:) to accomplish this. (Hint: the modulus
// operator may be useful.)

#include <iostream>

using namespace std;

int main () {
  int num;
  bool cont = true;
  cout << "To exit enter 99." << endl;
  while (cont) {
    cout << "Insert a number" << endl;
    cin >> num;
    if (num == 99) {
      return true;
    }
    int output = ((num > 0) && (num % 5 == 0)) ? num/5 : -1;
    cout << "Your output is " << output << endl;
  }
}
