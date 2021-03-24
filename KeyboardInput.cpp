#include <iostream>
#include <string>
using namespace std;

int main()
{

  int age;
  string fullName;

  cout << "Please enter your name: " << endl;
  getline(cin, fullName);

  cout << "Please enter age: " << endl;
  cin >> age;

  cout << age << endl;
  return 0;
}