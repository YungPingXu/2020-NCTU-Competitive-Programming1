#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int f[n + 1], record[n + 1] = {0};
    vector<int> num, pos;
    for (int i = 1; i <= n; i++) {
        cin >> f[i];
        record[f[i]] = 1;
        if (f[i] == 0) pos.push_back(i);
    }
    for (int i = 1; i <= n; i++)
        if (record[i] == 0) num.push_back(i);
    for (int i = num.size() - 1; i >= 0; i--) {
        if (num[i] == pos[num.size() - i - 1]) {
            if (i == 0)
                swap(num[i], num[i + 1]);
            else
                swap(num[i - 1], num[i]);
        }
    }
    for (int i = 1; i <= n; i++) {
        if (f[i] == 0) {
            f[i] = num.back();
            num.pop_back();
        }
        cout << f[i] << " ";
    }
    return 0;
}