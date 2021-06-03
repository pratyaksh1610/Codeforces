//https://codeforces.com/contest/1030/problem/A
#include <iostream>
using namespace std;

int main()
{
  int n, i, count = 0;
  cin >> n;
  int a[n];

  for (i = 0; i < n; i++)
    cin >> a[i];

  for (i = 0; i < n; i++)
  {
    if (a[i] == 1)
      count++;
  }

  if (count >= 1)
    cout << "HARD";
  else
    cout << "EASY";

  return 0;
}
