#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, n, temp, a, b, c;
    cin >> t;
    while (t--) {
        cin >> n;
        temp = n;
        map<int, int> m;
        for (int i = 2; i * i <= temp; i++) { // 質因數分解
            if (temp % i == 0) {
                int cnt = 0;
                while (temp % i == 0) {
                    temp /= i;
                    cnt++;
                }
                m[i] = cnt;
            }
        }
        if (temp > 1) m[temp] = 1;
        if (temp == n)
            puts("NO");
        else {
            if (m.size() >= 3) {
                int cnt = 1;
                for (auto i : m) {
                    if (cnt == 1)
                        a = int(pow(i.first, i.second));
                    else if (cnt == 2)
                        b = int(pow(i.first, i.second));
                    else if (cnt == 3)
                        c = int(pow(i.first, i.second));
                    else
                        c *= int(pow(i.first, i.second));
                    cnt++;
                }
                puts("YES");
                cout << a << " " << b << " " << c << endl;
            } else if (m.size() == 2) {
                int cnt = 1, x, y, t, k;
                for (auto i : m) {
                    if (cnt == 1) {
                        x = i.first;
                        y = i.second;
                    } else if (cnt == 2) {
                        t = i.first;
                        k = i.second;
                    }
                    cnt++;
                }
                if (y + k > 3) {
                    puts("YES");
                    cout << x << " " << t << " " << int(pow(x, y - 1)) * int(pow(t, k - 1)) << endl;
                } else
                    puts("NO");
            } else if (m.size() == 1) {
                for (auto i : m) {
                    if (i.second > 3 && i.first != int(pow(i.first, i.second - 3)) && i.first * i.first != int(pow(i.first, i.second - 3))) {
                        puts("YES");
                        cout << i.first << " " << i.first * i.first << " " << int(pow(i.first, i.second - 3)) << endl;
                    } else
                        puts("NO");
                }
            }
        }
    }
    return 0;
}