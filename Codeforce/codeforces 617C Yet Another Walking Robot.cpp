#include <iostream>
#include <map>
using namespace std;

int main() {
    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        char s[n];
        scanf("%s", s);
        map<pair<int, int>, int> m;
        int x = 0, y = 0, l = 0, r = 0, min = 2147483647;
        for (int i = 0; i < n; i++) {
            m[make_pair(x, y)] = i;
            switch (s[i]) {
                case 'L':
                    x--;
                    break;
                case 'R':
                    x++;
                    break;
                case 'U':
                    y++;
                    break;
                case 'D':
                    y--;
                    break;
            }
            if (m.count(make_pair(x, y))) {
                if (i - m[make_pair(x, y)] + 1 < min) {
                    min = i - m[make_pair(x, y)] + 1;
                    l = m[make_pair(x, y)];
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