#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, n;
    scanf("%d", &t);
    while (t--) {
        scanf("%d", &n);
        int a[n], max;
        long long ans = 0;
        for (int i = 0; i < n; i++) scanf("%d", &a[i]);
        bool minus;
        // 用正負將數列切成一段一段 再分別求每一段的最大值 其和即為答案
        // ex: [1,1,2,−1,−5,2,1,−3] 切成 [1,1,2] [-1,-5] [2,1] [-3]
        for (int i = 0; i < n; i++) {
            if (i == 0) {
                minus = (a[i] < 0) ? 1 : 0;
                max = a[i];
            } else {
                if ((minus && a[i] < 0) || (!minus && a[i] > 0))
                    max = (a[i] > max) ? a[i] : max;
                else {
                    ans += max;
                    max = a[i];
                    minus = !minus;
                }
            }
        }
        ans += max;
        printf("%lld\n", ans);
    }
    return 0;
}