#include <bits/stdc++.h>
using namespace std;

bool com(int x, int y) {
    return x > y;
}
int main() {
    int t, n, k;
    cin >> t;
    while (t--) {
        cin >> n >> k;
        int a[n], b[n], ans = 0;
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < n; i++) cin >> b[i];
        sort(a, a + n);
        sort(b, b + n, com);
        for (int i = 0; i < n; i++) {
            if (k > 0 && b[i] > a[i]) {
                swap(a[i], b[i]);
                k--;
            }
            ans += a[i];
        }
        cout << ans << endl;
    }
    return 0;
}
