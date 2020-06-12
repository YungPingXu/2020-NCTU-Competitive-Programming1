#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, n, m;
    cin >> t;
    while (t--) {
        cin >> n >> m;
        if (n == 1)
            puts("0");
        else if (n == 2)
            cout << m << endl;
        else if (n == 3 || n == 4)
            cout << 2 * m << endl;
        else {
            if (m % 2 == 0)
                cout << 2 * m << endl;
            else
                cout << 2 * (m / 2 + 1 + m / 2) << endl;
        }
    }
    return 0;
}
