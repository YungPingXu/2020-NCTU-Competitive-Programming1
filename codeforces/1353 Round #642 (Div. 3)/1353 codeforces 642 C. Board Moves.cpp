#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        ll ans = 0LL;
        for (int i = 4 + 4 * (n / 2 - 1), j = n / 2; i >= 4; i -= 4, j--) ans += (ll)i * j;
        cout << 2 * ans << endl;
    }
    return 0;
}
