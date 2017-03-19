// Lab 01 section 3.2

// Given a list of N integers, find its mean (as a double), maximum value, minimum value,
// and range. Your program will first ask for N, the number of integers in the list, which the
// user will input. Then the user will input N more numbers

#include <iostream>

using namespace std;

int main() {
  int numbers;
  cout << "This program calculates the mean, max and min of a group of numbers" << endl;
  cout << "Please, insert the quantity of numbers desired: " << endl;
  cin >> numbers;

  int myArray[numbers];

  cout << "Now please insert your numbers:" << endl;
  for ( int i = 0; i<numbers; i++ ) {
    cin >> myArray[i];
  }

  double mean = 0;
  int max = myArray[0];
  int min = myArray[0];

  for (int i = 0; i<numbers; i++ ) {
    mean = mean + myArray[i];
  }
  mean = mean / numbers;
  cout << "Your mean is: " << mean << endl;

  for (int i = 0; i<numbers; i++ ) {
    if (max < myArray[i]) {
      max = myArray[i];
    }
  }
  cout << "Your max is: " << max << endl;

  for (int i = 0; i<numbers; i++ ) {
    if (min > myArray[i]) {
      min = myArray[i];
    }
  }
  cout << "Your min is: " << min << endl;

  return 0;
}
