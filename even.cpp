#include <iostream>
using namespace std;
int main()
{
  int n;
  cin >> n;
  int i = 1;
  int sum = 0;
  while (i < n)
  {
    if (i % 2 == 0)
    {
      cout << "even is =" << i << endl;
    }
    i++;
  }
}