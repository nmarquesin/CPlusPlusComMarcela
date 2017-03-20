// 20 is the highest number that won't break the program.
// A limit can be set to make sure this won't be an issue.

# include <iostream>

using namespace std;

int main() {
  short number ;
  cout << " Enter a positive number, up to 20 : ";
  cin >> number ;

  while (number < 0 || number > 20) {
    cout << "Number not in range, please enter a number between 0 and 20: ";
    cin >> number ;
  }

  switch (number) {
    case 0:
      cout << "The factorial of " << number << " is 1.";
      break;
    case 1:
      cout << "The factorial of " << number << " is 1.";
      break;
    case 2:
      cout << "The factorial of " << number << " is 2.";
      break;
    case 3:
      cout << "The factorial of " << number << " is 6.";
      break;
    case 4:
      cout << "The factorial of " << number << " is 24.";
      break;
    case 5:
      cout << "The factorial of " << number << " is 120.";
      break;
    case 6:
      cout << "The factorial of " << number << " is 720.";
      break;
    case 7:
      cout << "The factorial of " << number << " is 5040.";
      break;
    case 8:
      cout << "The factorial of " << number << " is 40320.";
      break;
    case 9:
      cout << "The factorial of " << number << " is 362880.";
      break;
    case 10:
      cout << "The factorial of " << number << " is 3628800.";
      break;
    default:
      cout << "The factorial of " << number << " is ";
      long long accumulator = 1;
      for (; number > 0; accumulator *= number --);
      cout << accumulator << ".\n";
  }

  return 0;
}
