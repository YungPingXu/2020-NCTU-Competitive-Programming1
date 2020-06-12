#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        int a[n], even = 0, odd = 0;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            if (a[i] % 2 == 1)
                odd++;
            else
                even++;
        }
        if (odd % 2 == 0 && even % 2 == 0)
            puts("YES");
        else {
            bool yes = 0;
            sort(a, a + n);
            for (int i = 0; i < n - 1; i++) {
                if (a[i] == a[i + 1] - 1) {
                    yes = 1;
                    break;
                }
            }
            if (yes)
                puts("YES");
            else
                puts("NO");
        }
    }
    return 0;
}
