//https://codeforces.com/contest/71/problem/A
#include <iostream>
using namespace std;

int main()
{
  int n;
  string str;
  cin >> n;

  while (n--)
  {
    cin >> str;
    if (str.size() > 10)
      cout << str[0] << str.size() - 2 << str[str.size() - 1] << endl;

    else
    {
      cout << str << endl;
      continue;
    }
  }
  return 0;
}

/*

?if string length > 10 ,  abbreviate the string 
first letter + no. of characters in between first and last + last character
....................
localization -> l10n

*/