#include <iostream>

using namespace std;

int main()
{
  int num, sumDigits = 0, countDigits = 0;

  cout << "Enter a positive integer: " << endl;
  cin >> num;

  while (num > 0) {
    countDigits++;
    sumDigits += num % 10;
    num /= 10;
  }

  cout << "Sum: " << sumDigits << endl;
  cout << "Count: " << countDigits << endl;

  return 0;
}
