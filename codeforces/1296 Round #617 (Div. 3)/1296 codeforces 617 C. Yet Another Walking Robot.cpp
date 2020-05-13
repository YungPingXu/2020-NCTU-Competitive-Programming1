#include <bits/stdc++.h>
using namespace std;
#define INF 0x3f3f3f3f

int main() {
    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        char s[n];
        scanf("%s", s);
        map<pair<int, int>, int> m; // 用map紀錄每次走到的點
        int x = 0, y = 0, l = 0, r = 0, min = INF;
        for (int i = 0; i < n; i++) {
            m[make_pair(x, y)] = i;
            if (s[i] == 'R')
                x++;
            else if (s[i] == 'L')
                x--;
            else if (s[i] == 'U')
                y++;
            else
                y--;
            if (m.find({x, y}) != m.end()) {
                if (i - m[{x, y}] + 1 < min) {
                    min = i - m[{x, y}] + 1;
                    l = m[{x, y}];
                    r = i;
                }
            }
        }
        if (l == 0 && r == 0)
            puts("-1");
        else
            cout << l + 1 << " " << r + 1 << endl;
    }
    return 0;
}