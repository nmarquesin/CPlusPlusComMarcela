// Lab 01 section 2.2

// Write a program that outputs “Hello, World!”
// n times (where n is a nonnegative integer
// that the user will input) with:
// • a for loop.
// • a while loop.
// • a do...while loop

#include <iostream>

using namespace std;

#define char "Hello, World!"

int main()
{
  int n;

  cout << "Please enter a number to loop:" << endl;
  cin >> n;
  cout << "You chose " << n << endl;


  cout << "Here comes the for loop" << endl;
  for ( int i= 0; i<n; i++ )
  {
   cout << char << endl;
  }

  cout << "Here comes the while loop" << endl;
  int i = 0;
  while(i<n)
  {
   i++;
   cout << char << endl;
   }

   cout << "Here comes the do..while loop" << endl;
   i=0;
   do
   {
     i++;
     cout << char << endl;
   } while( i<n );

  return 0;
}
