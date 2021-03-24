#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
  vector<int> someVec;
  vector<string> anotherVec(3);

  someVec.push_back(1);
  someVec.push_back(2);
  someVec.push_back(3);

  cout << "someVec size: " << someVec.size() << endl;

  anotherVec[0] = "Joseph";
  anotherVec[1] = "Melanie";
  anotherVec[2] = "Sam";

  anotherVec.push_back("Sharon");

  for (int i = 0; i < someVec.size(); i++)
  {
    cout << someVec[i] << endl;
  }

  for (string name : anotherVec)
  {
    cout << name << endl;
  }
  return 0;
}