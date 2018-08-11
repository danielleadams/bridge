#include <iostream>
using namespace std;

const int dayOfWeeks = 7;

int main()
{
  int daysTraveled;
  int fullWeeks, remainingDays;

  cout<<"Please enter how many days traveled:"<<endl;
  cin>>daysTraveled;

  fullWeeks = daysTraveled / dayOfWeeks;
  remainingDays = daysTraveled % dayOfWeeks;

  cout<<daysTraveled<<" days are "<<fullWeeks<<" weeks and "<<remainingDays<<" days "<<endl;

  return 0;
}