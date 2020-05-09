#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, n, m, tmp;
    cin >> t;
    while (t--) {
        cin >> n >> m;
        int a[n];
        set<int> s;
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < m; i++) {
            cin >> tmp;
            s.insert(tmp);
        }
        bool yes = 1;
        for (int i = n - 1; i >= 0; i--) { // 用bubble sort模擬
            for (int j = 0; j < i; j++) {
                if (a[j] > a[j + 1]) {
                    swap(a[j], a[j + 1]);
                    if (s.find(j + 1) == s.end()) {
                        yes = 0;
                        break;
                    }
                }
            }
        }
        if (yes)
            puts("YES");
        else
            puts("NO");
    }
    return 0;
}