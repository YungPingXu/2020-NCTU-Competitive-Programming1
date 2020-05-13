#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, a, b, c, n;
    cin >> t;
    while (t--) {
        cin >> a >> b >> c >> n;
        if ((a + b + c + n) % 3 == 0) {
            int m = (a + b + c + n) / 3;
            if (m >= a && m >= b && m >= c) // 必要條件
                puts("YES");
            else
                puts("NO");
        } else
            puts("NO");
    }
    return 0;
}