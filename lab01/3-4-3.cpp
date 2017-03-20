// Lab 01 section 3.4.3

// break
// Modify the code from 3.4.2 to let the user break
// out of the loop by entering -1 or any negative
// number. Before the program exits, output the string “Goodbye!”.#include <iostream>
#include <iostream>

using namespace std;

int main() {
  int num;
  cout << "To exit enter any number less than zero." << endl;
  while (true) {
    cout << "Insert a number" << endl;
    cin >> num;
    if (num < 0) {
      cout << "Goodbye!" << endl;
      return 0;
    }
    if (!((num > 0) && (num % 5 == 0)))
      continue;
    cout << "Your output is " << num/5 << endl;
  }
}
