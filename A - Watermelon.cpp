//https://codeforces.com/contest/4/problem/A

#include <iostream>
using namespace std;

int main()
{
    int w;
    cin >> w;

    if (w % 2 == 0 && w != 2)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}

/*
weight of waetrmelon  - w kg
?divide weight in even number of kilos 
each part even 
Ex. 
w = 8 > 4+4 / 6+2
*/