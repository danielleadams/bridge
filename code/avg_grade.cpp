#include <iostream>

using namespace std;

int main()
{
  int numOfStudents, count, curr, sum;
  double average;

  cout << "Please enter the number of students in class" << endl;
  cin >> numOfStudents;

  cout << "Enter the students grades (separate by space)" << endl;

  sum = 0;

  for (int count = 1; count <= numOfStudents; count++) {
    cin >> curr;
    sum += curr;
  }

  average = (double)sum / (double)numOfStudents;

  cout << "Average: " << average << endl;

  return 0;
}
