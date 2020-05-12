#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        int a[n], odd = 0, even = 0;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            if (a[i] % 2 == 1)
                odd++;
            else
                even++;
        }
        if (odd == 0)
            puts("NO"); // 沒有任何奇數就一定不能
        else {
            if (odd % 2 == 1) // 有奇數個奇數就行
                puts("YES");
            else {
                if (even != 0) // 偶數個奇數以及有偶數就行
                    puts("YES");
                else
                    puts("NO");
            }
        }
    }
    return 0;
}