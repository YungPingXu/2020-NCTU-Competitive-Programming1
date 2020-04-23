#include <algorithm>
#include <iostream>
using namespace std;
struct cor {
    int x;
    int y;
};
bool com(struct cor t, struct cor k) {
    if (t.x <= k.x)
        return t.y <= k.y;
    else
        return false;
}
int main() {
    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        struct cor s[n + 1];
        string ans = "";
        s[0].x = 0;
        s[0].y = 0;
        for (int i = 1; i < n + 1; i++) cin >> s[i].x >> s[i].y;
        sort(s, s + n + 1, com);
        bool flag = true;
        for (int i = 0; i < n; i++) {
            if (s[i].x <= s[i + 1].x && s[i].y <= s[i + 1].y) {
                ans.insert(ans.length(), s[i + 1].x - s[i].x, 'R');
                ans.insert(ans.length(), s[i + 1].y - s[i].y, 'U');
            } else {
                flag = false;
                break;
            }
        }
        if (flag) {
            puts("YES");
            cout << ans << endl;
        } else
            puts("NO");
    }
    return 0;
}