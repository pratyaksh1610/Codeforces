//https://codeforces.com/contest/1/problem/A

#include <bits/stdc++.h>
using namespace std;

long long flag(int n, int m, int a)
{
    long long i, j;
    i = (n % a == 0 ? n / a : n / a + 1); // use of ternary operator
    j = (m % a == 0 ? m / a : m / a + 1);

    return i * j;
}

int main()
{
    long long n, m, a, res;
    cin >> n >> m >> a;
    res = flag(n, m, a);
    cout << res;

    return 0;
}

/* 
Rectangle -  N x M   
Square  - A x A
? Least no. of squares that can fit in rectangle without cutting
  (can cover extra part outside rectangle)

 First find total squares that can come on n side - (n/a) 
 similarly for m side  - (m/a) 


 n = 5 , m = 5 , a = 4 (total 20 square of unit length)
 (n/a) = 1
 (m/a) = 1
 if remainder !=0 so , add 1 to both 
      
         column_m
         |
 row_n-  * * * * *
         * * * * *
         * * * * * 
         * * * * * 
         * * * * * 

    *  *  *  *  *
    1  2  3  4  5
    *  *  *  *  *
    2  
    *  *  *  *  *
    3
    *  *  *  *  *
    4
    *  *  *  *  *

    (4 row , 5 column so 5 x 4 = 20 squares (1 x 1) can fit inside this matrix)   
    (in case of 2 x 2 then 3 x 2 = 6 squares can come in matrix without cutting) 
*/