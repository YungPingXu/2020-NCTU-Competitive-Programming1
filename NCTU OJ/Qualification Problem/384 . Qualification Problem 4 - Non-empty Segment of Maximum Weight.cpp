#include <iostream>
using namespace std;

int main() {
    // 題目的意思就是求最大連續子序列和
    int n;
    cin >> n;
    int a[n + 1];
    for (int i = 1; i <= n; i++) cin >> a[i];
    int ans = 0, sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += a[i];
        if (sum > ans) ans = sum;
        if (sum < 0) sum = 0;
    }
    // 當序列裡全為負數時，答案則為序列裡最大的數
    bool flag = true;
    int max = a[1];
    for (int i = 1; i <= n; i++) {
        if (a[i] >= 0) flag = false;
        if (i != 1)
            if (a[i] > max)
                max = a[i];
    }
    if (flag)
        cout << max;
    else
        cout << ans;
    return 0;
}