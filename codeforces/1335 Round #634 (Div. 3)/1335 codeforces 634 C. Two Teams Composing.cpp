#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, n;
    scanf("%d", &t);
    while (t--) {
        scanf("%d", &n);
        int a[n + 1], cnt = 0;
        memset(a, 0, sizeof(a));
        for (int i = 0; i < n; i++) {
            int tmp;
            scanf("%d", &tmp);
            if (a[tmp] == 0) cnt++;
            a[tmp]++;
        }
        cnt--;
        int max = a[1];
        for (int i = 2; i <= n; i++)
            if (a[i] > max) max = a[i];
        int ans = min(max, n / 2);
        bool flag = 0;
        if (ans < max) {
            cnt++;
            flag = 1;
        }
        if (ans > cnt) {
            ans--;
            if (!flag) cnt++;
        }
        while (ans > cnt) ans--;
        printf("%d\n", ans);
    }
    return 0;
}