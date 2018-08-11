#include <iostream>

using namespace std;

int main()
{
  bool seenEndOfInput;
  int sum, numOfStudents;

  cout << "Enter grade separated by space" << endl;
  cout << "End sequence by typing -1" << endl;

  seendEndOfInput = false;

  sum = 0;
  numOfStudents = 0;

  while (!seenEndOfInput) {
    cin >> curr;

    if (input == -1)
      seenEndOfInput = true;
    else {
      sum += curr;
      numOfStudents++;
    }
  }

  return 0;
}
