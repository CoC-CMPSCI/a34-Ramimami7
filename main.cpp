#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
  string month1, month2, month3;
  double rainfall1, rainfall2, rainfall3;
  double avg;

  // TODO: Read three months and their rainfall values from standard input

  cout << month1 <<endl;
  cin >> rainfall1;

  cout << month2 <<endl;
  cin >> rainfall2;

  cout << month3 <<endl;
  cin >> rainfall3;

  // TODO: Calculate the average rainfall
  avg = (rainfall1 + rainfall2 + rainfall3) / 3;
  cout << fixed << setprecision(2);
  // TODO: Print the result in the required format
  cout << avg << endl;
}
