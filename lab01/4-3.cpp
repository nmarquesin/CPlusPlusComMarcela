# include <iostream>

using namespace std;

int main() {
  short number ;
  cout << " Enter a positive number : ";
  cin >> number ;

  while (number < 0) {
    cout << "That is a negative number, please enter a positive number: ";
    cin >> number ;
  }

  cout << "The factorial of " << number << " is ";
  int accumulator = 1;
  for (; number > 0; accumulator *= number --);
  cout << accumulator << ".\n";

  return 0;
}

// The min number for which the program stops working is 13.
// This happens because of the limitations of the format
// of the accumulator varible. 13! exceeds the limitations
// of 9 digits.
