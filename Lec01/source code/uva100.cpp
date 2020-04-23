#include<bits/stdc++.h>

using namespace std;

int cycle_length(int n) {
    int ret = 1;
    while (n != 1) {
        n = (n % 2 != 0) ? 3 * n + 1 : n / 2;
        ret++;
    }
    return ret;
}

int main() {
    int i, j;
    while (scanf("%d %d",&i, &j) == 2) {
        int ans = 0;
        for (int n = min(i,j); n <= max(i,j); n++) {
        //for (int n = i; n <= j; n++) {
            ans = max(cycle_length(n), ans);
        }
        printf("%d %d %d\n", i, j, ans);
    }
    return 0;
}
