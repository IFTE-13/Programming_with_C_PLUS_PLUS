#include <iostream>
#include <cstring>
using namespace std;

int max(int a, int b);

int lcs( char *x, char *y, int m, int n )
{
    if (m == 0 || n == 0)
        return 0;
    if (x[m-1] == y[n-1])
        return 1 + lcs(x, y, m-1, n-1);
    else
        return max(lcs(x, y, m, n-1), lcs(x, y, m-1, n));
}

int max(int a, int b)
{
    return (a > b)? a : b;
}

int main()
{
    char x[] = "MOHAMMED";
    char y[] = "IFTEKHAR";

    int m = strlen(x);
    int n = strlen(y);

    cout<<"Length of LCS is "<< lcs( x, y, m, n )<<endl;;

    return 0;
}

