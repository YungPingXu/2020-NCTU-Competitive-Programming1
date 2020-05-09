#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    while (n--) {
        int t;
        cin >> t;
        int a[t];
        for (int i = 0; i < t; i++) cin >> a[i];
        bool flag = 0;
        for (int i = 1; i < t; i++)
            if (abs(a[i] - a[i - 1]) % 2) flag = 1; // 相鄰的個數差如果有一個是奇數就不行
        if (!flag)
            puts("YES");
        else
            puts("NO");
    }
    return 0;
}