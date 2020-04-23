#include <iostream>
using namespace std;

int main() {
    int t, n, m, temp;
    cin >> t;
    while (t--) {
        cin >> n >> m;
        char s[n];
        int alpha[26] = {0}, f[n] = {0};
        scanf("%s", s);
        for (int i = 0; i < m; i++) {
            cin >> temp;
            f[temp - 1]++;
        }
        for (int i = n - 2; i >= 0; i--) f[i] += f[i + 1];
        for (int i = 0; i < n; i++) alpha[s[i] - 'a'] += f[i] + 1;
        for (int i = 0; i < 26; i++) cout << alpha[i] << " ";
        puts("");
    }
    return 0;
}