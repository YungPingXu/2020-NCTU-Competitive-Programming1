#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int n, k;
    scanf("%d%d", &n, &k);
    string str;
    getchar();
    getline(cin, str);
    bool rec[26] = {0};
    for (int i = 0; i < k; i++) {
        char c;
        cin >> c;
        rec[c - 'a'] = 1;
    }
    ll i = 0, j = 0, ans = 0;
    while (j < str.length()) {
        if (!rec[str[i] - 'a']) {
            i++;
            j = i;
        } else {
            if (rec[str[j + 1] - 'a'])
                j++;
            else {
                ans += (j - i + 1) * (j - i + 2) / 2;
                i = j + 1;
            }
        }
    }
    printf("%lld", ans);
    return 0;
}