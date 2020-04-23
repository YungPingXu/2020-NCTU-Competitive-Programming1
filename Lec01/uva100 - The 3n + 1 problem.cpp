#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    int i, j;
    while (cin >> i >> j)
    {
        int maximum = 0;
        for (int k = min(i, j); k <= max(i, j); k++)
        {
            int n = k, ans = 1;
            while (n != 1)
            {
                n = (n % 2 == 0) ? n / 2 : 3 * n + 1;
                ans++;
            }
            maximum = max(maximum, ans);
        }
        printf("%d %d %d\n", i, j, maximum);
    }
    return 0;
}