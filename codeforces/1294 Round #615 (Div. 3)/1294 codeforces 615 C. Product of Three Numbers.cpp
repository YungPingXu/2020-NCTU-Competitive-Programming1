#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, n, a, b, c;
    cin >> t;
    while (t--) {
        cin >> n;
        bool yes = 0;
        for (int i = 2; i * i <= n; i++) {
            if (n % i == 0 && n / i != i) {
                a = i;
                yes = 1;
                break;
            }
        }
        if (yes) {
            yes = 0;
            n /= a;
            for (int i = 2; i * i <= n; i++) {
                if (n % i == 0 && n / i != i && i != a && n / i != a) {
                    b = i;
                    yes = 1;
                    break;
                }
            }
        }
        if (yes) {
            n /= b;
            yes = 0;
            if (n != a && n != b) {
                c = n;
                yes = 1;
            }
        }
        if (yes) {
            puts("YES");
            cout << a << " " << b << " " << c << endl;
        } else
            puts("NO");
    }
    return 0;
}