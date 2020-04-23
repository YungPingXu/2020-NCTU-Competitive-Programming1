#include <bits/stdc++.h>
using namespace std;

int h(int x, int m) {
    if (x >= m) return x - m;
    if (m % 2 == 0)
        return 1 + h(x, m / 2);
    else
        return 1 + h(x, m + 1);
}
int main() {
    int n, m;
    cin >> n >> m;
    cout << h(n, m);
    return 0;
}