#include <bits/stdc++.h>
using namespace std;

int main() {
   int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        int s[n];
        for (int i = 0; i < n; i++) cin >> s[i];
        sort(s, s + n);
        int ans;
        for (int i = 0; i < n - 1; i++) {
            if (i == 0)
                ans = s[i + 1] - s[i];
            else {
                if (abs(s[i + 1] - s[i]) < ans)
                    ans = abs(s[i + 1] - s[i]);
            }
        }
        cout << ans << endl;
    }
    return 0;
}
