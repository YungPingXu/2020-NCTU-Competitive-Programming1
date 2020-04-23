#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    while (n--) {
        int t;
        cin >> t;
        int col[t];
        for (int i = 0; i < t; i++) cin >> col[i];
        bool flag = false;
        for (int i = 1; i < t; i++) {
            if (abs(col[i] - col[i - 1]) % 2 != 0) flag = true;
        }
        if (!flag)
            puts("YES");
        else
            puts("NO");
    }
    return 0;
}