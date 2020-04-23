#include <iostream>
#include <set>
using namespace std;

int main() {
    int t, n, m, temp;
    cin >> t;
    while (t--) {
        cin >> n >> m;
        int a[n];
        set<int> s;
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < m; i++) {
            cin >> temp;
            s.insert(temp);
        }
        bool flag = true;
        for (int i = n - 1; i >= 0; i--) {
            for (int j = 0; j < i; j++) {
                if (a[j] > a[j + 1]) {
                    swap(a[j], a[j + 1]);
                    if (s.count(j + 1) == 0) {
                        flag = false;
                        break;
                    }
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