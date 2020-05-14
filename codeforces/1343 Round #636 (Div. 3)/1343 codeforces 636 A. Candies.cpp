#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, n, ans;
    scanf("%d", &t);
    while (t--) {
        scanf("%d", &n);
        // 等比級數和公式
        for (int k = 2; k <= 31; k++) {
            if (n % ((int)pow(2, k) - 1) == 0) {
                ans = n / ((int)pow(2, k) - 1);
                break;
            }
        }
        printf("%d\n", ans);
    }
    return 0;
}