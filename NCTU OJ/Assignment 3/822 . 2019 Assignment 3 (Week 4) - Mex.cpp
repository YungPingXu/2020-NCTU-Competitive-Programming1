#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main() {
    int T, n;
    cin >> T;
    while (T--) {
        ll l, r, tmp;
        cin >> n >> l >> r;
        ll cnt = r - l + 1;
        int len = min(int(cnt), n);
        bool b[len];
        memset(b, false, sizeof(b));
        while (n--) {
            cin >> tmp;
            tmp -= l;
            if (tmp < 0 || tmp >= len)
                continue;
            else
                b[tmp] = true;
        }
        bool flag = false;
        for (ll i = 0; i <= r - l; i++) {
            if (b[i] == false || i > len) {
                cout << i + l << endl;
                flag = true;
                break;
            }
        }
        if (!flag)
            puts("^v^");
    }
    return 0;
}