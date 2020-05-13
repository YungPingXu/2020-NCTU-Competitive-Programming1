#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, n, k;
    cin >> t;
    while (t--) {
        cin >> n >> k;
        if (n % k <= k / 2)
            cout << n << endl;
        else
            cout << n - n % k + k / 2 << endl;
    }
    return 0;
}