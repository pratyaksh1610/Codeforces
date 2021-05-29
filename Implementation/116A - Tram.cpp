//https://codeforces.com/problemset/problem/116/A
#include <iostream>
using namespace std;

int main()
{
    int n, p = 0, answer = 0;
    cin >> n;

    for (int i = 0; i < n; i++)
    {

        int entry, exit;
        cin >> exit >> entry;

        p = p - exit;
        p = p + entry;
        answer = max(p, answer);
    }

    cout << answer;
}

/*
n lines
?capacity of tram
brute force approach 
input no. of people at exit and entry

if exit then subtract , else add 
find maximum ..
*/