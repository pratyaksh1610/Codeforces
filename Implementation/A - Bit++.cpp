//https://codeforces.com/contest/282/problem/A
#include <iostream>
using namespace std;

int main()
{
  int n, x = 0;
  string y;
  cin >> n;

  while (n--)
  {
    cin >> y;
    if (y.compare("++X") == 0)
      ++x;
    else if (y.compare("X++") == 0)
      x++;
    else if (y.compare("--X") == 0)
      --x;
    else if (y.compare("X--") == 0)
      x--;
  }
  cout << x;
  return 0;
}
