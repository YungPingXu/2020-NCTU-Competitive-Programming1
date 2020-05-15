#include <bits/stdc++.h>
using namespace std;

int main() {
    int q;
    scanf("%d", &q);
    while (q--) {
        long long s[3], ans = 0;
        scanf("%lld%lld%lld", &s[0], &s[1], &s[2]);
        if (s[0] == s[1] && s[1] == s[2])
            puts("0");
        else {
            sort(s, s + 3);
            if (s[0] == s[1]) {
                s[0]++;
                s[1]++;
                if (s[1] != s[2]) s[2]--;
            } else if (s[1] == s[2]) {
                s[1]--;
                s[2]--;
                if (s[1] != s[0]) s[0]++;
            } else {
                s[0]++;
                s[2]--;
            }
            ans = abs(s[1] - s[0]) + abs(s[1] - s[2]) + abs(s[0] - s[2]);
            printf("%lld\n", ans);
        }
    }
    return 0;
}