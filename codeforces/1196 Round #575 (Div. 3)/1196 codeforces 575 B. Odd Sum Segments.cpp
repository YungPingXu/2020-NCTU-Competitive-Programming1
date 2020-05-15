#include <bits/stdc++.h>
using namespace std;

int main() {
    int q, n, k;
    scanf("%d", &q);
    while (q--) {
        scanf("%d%d", &n, &k);
        int a[n], odd = 0; // odd為奇數個數
        for (int i = 0; i < n; i++) {
            scanf("%d", &a[i]);
            if (a[i] % 2) odd++;
        }
        if (odd < k) // 一定有一段沒有奇數
            puts("NO");
        else {
            if (odd % 2 != k % 2) // 當odd和k的奇偶性不同時 一定有一段是偶數個奇數 這段的和就不會是奇數
                puts("NO");
            else {
                puts("YES");
                int cnt = 0;
                for (int i = 0; i < n; i++) {
                    if (a[i] % 2) {
                        cnt++;
                        if (cnt <= k - 1) printf("%d ", i + 1); // 印出前k-1個奇數所在的位置
                        if (cnt == k - 1) break;
                    }
                }
                printf("%d\n", n); // 最後印出n(最後一個必定為n)
            }
        }
    }
    return 0;
}