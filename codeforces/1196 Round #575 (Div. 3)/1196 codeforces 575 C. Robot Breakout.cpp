#include <bits/stdc++.h>
using namespace std;
#define N 100000

int main() {
    int q, n;
    scanf("%d", &q);
    while (q--) {
        scanf("%d", &n);
        int xmin = -N, xmax = N, ymin = -N, ymax = N;
        while (n--) {
            int x, y, f1, f2, f3, f4;
            scanf("%d%d%d%d%d%d", &x, &y, &f1, &f2, &f3, &f4);
            if (!f1) xmin = max(x, xmin);
            if (!f2) ymax = min(y, ymax);
            if (!f3) xmax = min(x, xmax);
            if (!f4) ymin = max(y, ymin);
        }
        if (xmin > xmax || ymin > ymax)
            puts("0");
        else
            printf("1 %d %d\n", xmin, ymin);
    }
    return 0;
}