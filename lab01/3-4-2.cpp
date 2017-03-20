// Lab 01 section 3.4.2

// continue
// Modify the code from 3.4.1 so that if the condition fails,
// nothing is printed. Use an if and a continue command
// (instead of the ternary operator) to accomplish this.

#include <iostream>

using namespace std;

int main () {
  int num;
  cout << "To exit enter 99." << endl;
  while (true) {
    cout << "Insert a number" << endl;
    cin >> num;
    if (num == 99) {
      return 0;
    }
    if (!((num > 0) && (num % 5 == 0)))
      continue;
    cout << "Your output is " << num/5 << endl;
  }
}
