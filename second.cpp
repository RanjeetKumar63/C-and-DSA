#include <iostream>
using namespace std;
int main()
{
  int a;
  cin >> a;
  cout << "Enter the value:" << endl;
  if (a > 0)
  {
    cout << "A is positive" << endl;
  }
  else
  {
    if (a < 0)
    {
      cout << "A is negative" << endl;
    }

    else
    {
      cout << "A is zoro" << endl;
    }
  }
}