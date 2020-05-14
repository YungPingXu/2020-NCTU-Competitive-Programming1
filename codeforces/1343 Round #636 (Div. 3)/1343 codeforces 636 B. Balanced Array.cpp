#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, n;
    scanf("%d", &t);
    while (t--) {
        scanf("%d", &n);
        if ((n / 2) % 2 == 1)
            puts("No"); // 當n/2是奇數時 後半部分的和會是奇數 但前半部分的和必為偶數 絕對不會相同
        else {
            puts("Yes");
            int a[n / 2], b[n / 2];
            for (int i = 0, j = 2, k = 1; i < n / 2; i++, j += 2, k += 2) {
                a[i] = j;
                b[i] = k;
            }
            b[n / 2 - 1] += n / 2;
            for (int i = 0; i < n / 2; i++) printf("%d ", a[i]);
            for (int i = 0; i < n / 2; i++) printf("%d ", b[i]);
            puts("");
        }
    }
    return 0;
}