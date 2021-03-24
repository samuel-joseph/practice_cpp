#include <iostream>
#include <cmath>
using namespace std;

int main()
{
  int powResult = pow(2, 3);
  int sqrResult = sqrt(25);
  int ceilResult = ceil(4.2);
  int floorResult = floor(4.2);

  cout << "2^3 is " << powResult << endl;
  cout << "sqrt of 25 is " << sqrResult << endl;
  cout << "ceiling of 4.2 is " << ceilResult << endl;
  cout << "floor of 4.2 is " << floorResult << endl;
  return 0;
}