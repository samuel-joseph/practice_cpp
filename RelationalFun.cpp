#include <iostream>
using namespace std;

/*
    >  greater than
    >= greather than or equal to
    < less than
    < less than or equal to
    == equal-to
    != not-equal-to
*/

int main()
{

  cout << boolalpha;

  int a = 15;
  int b = 20;
  bool areEqual = a == b;
  int age = 28;
  bool isLess = age >= 21;

  cout << isLess << endl;

  return 0;
}