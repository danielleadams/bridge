#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
  char inputChar;
  int asciiValue;

  cout<<"Please enter a char:"<<endl;
  cin>>inputChar;

  asciiValue = (int)inputChar; // type casted from char to int

  cout<<"The ASCII value of "<<inputChar<<" is "<<asciiValue<<endl;

  return 0;
}