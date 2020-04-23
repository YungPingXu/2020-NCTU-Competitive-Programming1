#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, q;
    cin >> n >> q;
    int a[n + 1];
    for (int i = 1; i <= n; i++) cin >> a[i];
    for (int j = 1; j <= q; j++) {
        int L, R, k;
        cin >> L >> R >> k;
        int b[R - L + 2];
        for (int i = L, t = 1; i <= R; i++, t++) b[t] = a[i];
        sort(b + 1, b + R - L + 2);
        cout << b[k] << endl;
    }
    return 0;
}