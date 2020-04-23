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
        bool flag = false;
        for (int i = 1; i <= n; i++) {
            for (int j = i + 2; j <= n; j++) {
                if (a[i] == a[j]) {
                    flag = true;
                    break;
                }
            }
        }
        if (flag)
            puts("YES");
        else
            puts("NO");
    }
    return 0;
}