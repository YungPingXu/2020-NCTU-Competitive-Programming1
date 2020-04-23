#include <bits/stdc++.h>
using namespace std;

int main() {
    int x, y, ans = 0;
    cin >> x >> y;
    x = abs(x);
    y = abs(y);
    if (x > y) swap(x, y);
    if (x == 0) // 當其中一數等於0，另一數不等於0時，答案為另一數的絕對值
        cout << y;
    else {
        for (int i = 1; i <= x; i++)
            if (x % i == 0 && y % i == 0)
                ans = i;
        cout << ans;
    }
    return 0;
}