#include <bits/stdc++.h>
using namespace std;

bool com(pair<int, int> t, pair<int, int> k) {
    if (t.first <= k.first)
        return t.second <= k.second;
    else
        return false;
}
int main() {
    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        vector<pair<int, int>> v(n + 1);
        string ans = "";
        v[0].first = 0;
        v[0].second = 0;
        for (int i = 1; i < n + 1; i++) cin >> v[i].first >> v[i].second;
        sort(v.begin(), v.end(), com);
        bool flag = false;
        for (int i = 0; i < n; i++) {
            if (v[i].first <= v[i + 1].first && v[i].second <= v[i + 1].second) {
                ans.insert(ans.length(), v[i + 1].first - v[i].first, 'R');
                ans.insert(ans.length(), v[i + 1].second - v[i].second, 'U');
            } else {
                flag = true;
                break;
            }
        }
        if (!flag) {
            puts("YES");
            cout << ans << endl;
        } else
            puts("NO");
    }
    return 0;
}