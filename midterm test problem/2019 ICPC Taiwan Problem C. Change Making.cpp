#include <bits/stdc++.h>
using namespace std;
#define INF 0x3f3f3f3f

int dp[100001];

int main() {
    int n;
    cin >> n;
    int dollar[n];
    for (int i = 0; i < n; i++) cin >> dollar[i];
    dp[0] = 0;
    for (int i = 1; i <= 100000; i++) {
        // by dynamic programming
        int min = INF;
        for (int j = 0; j < n; j++) {
            if (i - dollar[j] < 0) continue;
            if (1 + dp[i - dollar[j]] < min)
                min = 1 + dp[i - dollar[j]];
        }
        if (min != INF) dp[i] = min;
        // by greedy
        int g = i, ans = 0;
        while (g) {
            int max = -INF;
            for (int j = 0; j < n; j++) {
                if (dollar[j] <= g && dollar[j] > max)
                    max = dollar[j];
            }
            ans += g / max;
            g %= max;
        }
        if (dp[i] != ans) {
            cout << i;
            break;
        }
        if (i == 100000) cout << "-1";
    }
    return 0;
}