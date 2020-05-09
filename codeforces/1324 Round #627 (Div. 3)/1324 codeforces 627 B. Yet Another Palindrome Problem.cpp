#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n + 1];
        for (int i = 1; i <= n; i++) cin >> a[i];
        bool yes = 0;
        for (int i = 1; i <= n; i++) { // 找像121這樣的子字串
            for (int j = i + 2; j <= n; j++) {
                if (a[i] == a[j]) {
                    yes = 1;
                    break;
                }
            }
        }
        if (yes)
            puts("YES");
        else
            puts("NO");
    }
    return 0;
}