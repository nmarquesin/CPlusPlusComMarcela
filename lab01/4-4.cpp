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
  long long accumulator = 1;
  for (; number > 0; accumulator *= number --);
  cout << accumulator << ".\n";

  return 0;
}

// Changing the accumulator varible from int (16 bits) to
// long long int (64 bits) make the program calculate 13!
// correctly.
