#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll dir1[27] = {1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1};
ll dir2[27] = {1, 1, 1, 0, 0, 0, -1, -1, -1, 1, 1, 1, 0, 0, 0, -1, -1, -1, 1, 1, 1, 0, 0, 0, -1, -1, -1};
ll dir3[27] = {1, 0, -1, 1, 0, -1, 1, 0, -1, 1, 0, -1, 1, 0, -1, 1, 0, -1, 1, 0, -1, 1, 0, -1, 1, 0, -1};
int main() {
    int q;
    scanf("%d", &q);
    while (q--) {
        ll a, b, c, ans = 10e9;
        scanf("%lld%lld%lld", &a, &b, &c);
        for (int i = 0; i < 27; i++) {
            ll x = a + dir1[i], y = b + dir2[i], z = c + dir3[i];
            ans = min(ans, abs(x - y) + abs(x - z) + abs(y - z));
        }
        printf("%lld\n", ans);
    }
    return 0;
}