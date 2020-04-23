#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int h, m, ans, ans1, ans2;
        scanf("%d:%d", &h, &m);
        if (h == 12) h = 0;
        ans = 12 * 60 - h * 60 - m;
        ans1 = (ans / 60 == 0) ? 12 : ans / 60;
        ans2 = ans % 60;
        printf("%02d:%02d\n", ans1, ans2);
    }
    return 0;
}