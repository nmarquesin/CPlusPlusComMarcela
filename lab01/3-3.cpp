// Lab 01 section 3.3

// Prime Numbers
// Write a program to read a number N from the user and then find the first
// N primes. A prime number is a number that only has two divisors, one
// and itself.

#include <iostream>

using namespace std;

bool isPrime(int num) {
  for (int i = 2; i<num ; i++) {
    if (num % i == 0) {
      return false;
    }
  }
  return true;
}

int main() {
  int primes;
  int count = 0;
  int number = 1;
  cout << "How many prime numbers would you like to see?" << endl;
  cin >> primes;
  cout << "The first " << primes << " prime numbers are: " << endl;
  while (count < primes) {
    if ( isPrime(number) ){
      cout << number << endl;
      count = count + 1;
    }
    number = number + 1;
  }
  return 0;
}
