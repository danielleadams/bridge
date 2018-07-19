#include <iostream>
#include <cmath>
using namespace std;

const double PI = 3.14;

int main()
{
  double radius, area;

  cout<<"Please enter the radius:"<<endl;
  cin>>radius;

  area = M_PI * (radius * radius);

  cout<<"The area of a circle with radius of "<<radius<<" is "<<area<<endl;

  return 0;
}