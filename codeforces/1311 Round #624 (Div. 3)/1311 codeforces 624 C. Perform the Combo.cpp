#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, n, m, tmp;
    cin >> t;
    while (t--) {
        cin >> n >> m;
        char s[n];
        int ans[26] = {0}, f[n] = {0};
        scanf("%s", s);
        for (int i = 0; i < m; i++) {
            cin >> tmp;
            f[tmp - 1]++;
        }
        for (int i = n - 2; i >= 0; i--) f[i] += f[i + 1]; // 類似前綴和的概念
        for (int i = 0; i < n; i++) ans[s[i] - 'a'] += f[i] + 1; // +1代表剩下的最後一次
        for (int i = 0; i < 26; i++) cout << ans[i] << " ";
        puts("");
    }
    return 0;
}