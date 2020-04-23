#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    while (cin >> n && n) {
        int m = 1;
        while (1) {
            int a[n + 1], count = 0, j = 1, record;
            for (int i = 0; i < n + 1; i++)
                a[i] = 0;
            while (count != n) {
                a[j] = 1;
                count++;
                if (count == n)
                    break;
                int count2 = 0, t = j, record2;
                while (count2 != m) {
                    if (t + 1 > n)
                        t = 1;
                    else
                        t++;
                    if (a[t] == 0) {
                        record2 = t;
                        count2++;
                    }
                }
                j = record2;
                record = j;
            }
            if (record == 2) {
                cout << m << endl;
                break;
            }
            m++;
        }
    }
    return 0;
}
