#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    for (int i = 1; i <= T; i++) {
        int N, D;
        cin >> N;
        string s, ans;
        map<string, int> m;
        while (N--) {
            string tmp;
            int d;
            cin >> tmp >> d;
            m[tmp] = d;
        }
        cin >> D >> s;
        if (m[s] == 0)
            ans = "Do your own homework!";
        else if (m[s] <= D)
            ans = "Yesss";
        else if (m[s] > D && m[s] <= D + 5)
            ans = "Late";
        else
            ans = "Do your own homework!";
        cout << "Case " << i << ": " << ans << endl;
    }
    return 0;
}