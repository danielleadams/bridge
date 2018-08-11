#include <iostream>
using namespace std;

int main()
{
  int val = 0;

  if((val = 0)) // Don't do this
    cout << "val is 0" << endl;
  else
    cout << "val is not 0" << endl;

  return 0;
}