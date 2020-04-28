#include <bits/stdc++.h>
using namespace std;

int n, m;
set<string> s;
string ans;
bool recur(int index, bool alpha[][26]) {
    if (index == m) {
        return s.find(ans) == s.end(); // ans沒有在set裡面
    } else {
        bool res = false;
        for (int i = 0; i < 26; i++) {
            if (alpha[index][i]) {
                ans[index] = 'a' + i;
                res = recur(index + 1, alpha);
                if (res) break; // 這行必須要加，否則有可能讓已經找到的true被後來的false覆蓋掉，同時也是減少執行時間的關鍵
            }
        }
        return res;
    }
}
int main() {
    cin >> n >> m;
    bool alpha[m][26];
    memset(alpha, false, sizeof(alpha));
    getchar();
    while (n--) {
        getline(cin, ans);
        s.insert(ans);
        for (int j = 0; j < m; j++)
            alpha[j][ans[j] - 'a'] = true;
    }
    if (recur(0, alpha))
        cout << ans << endl;
    else
        puts("-1");
    return 0;
}