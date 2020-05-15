#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        long long n, k, j;
        scanf("%lld%lld", &n, &k);
        long long i = (long long)sqrt(2 * k);
        while (k > i * (i + 1) / 2) i++;
        j = i * (i + 1) / 2 - k;
        string ans(n, 'a');
        ans[n - i - 1] = 'b';
        ans[n - i + j] = 'b';
        cout << ans << endl;
    }
    return 0;
}