#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, a, b;
    scanf("%d", &t);
    while (t--) {
        scanf("%d%d", &a, &b);
        if (a % b == 0)
            puts("0");
        else {
            if (a < b)
                printf("%d\n", b - a);
            else
                printf("%d\n", (a / b + 1) * b - a);
        }
    }
    return 0;
}