#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, s;
    cin >> t;
    while (t--) {
        cin >> s;
        int ans = 0;
        while (s >= 10) {
            int tmp = s / 10;
            ans += tmp * 10;
            s -= tmp * 10;
            s += tmp;
        }
        cout << ans + s << endl;
    }
    return 0;
}