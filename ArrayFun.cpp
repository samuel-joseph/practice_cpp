#include <iostream>
#include <string>

using namespace std;

int main()
{

  int ARRAY_SIZE = 5;
  int myArray[ARRAY_SIZE];
  string names[4] = {"Bob", "Sally", "Neil", "Melanie"};

  myArray[0] = 10;
  myArray[1] = 12;
  myArray[2] = 7;
  myArray[3] = 20;
  myArray[4] = 6;

  for (int i = 0; i < ARRAY_SIZE; i++)
  {

    cout << myArray[i] << endl;
  }

  for (string name : names)
  {
    cout << name << endl;
  }

  return 0;
}