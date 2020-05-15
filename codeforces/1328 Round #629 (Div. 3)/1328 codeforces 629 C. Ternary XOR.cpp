#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, n;
    scanf("%d", &t);
    while (t--) {
        scanf("%d", &n);
        char s[n + 1], a[n + 1], b[n + 1];
        scanf("%s", s);
        s[n] = a[n] = b[n] = '\0';
        bool big = 0; // 是否已分出誰大誰小 分出大小後 讓大的之後全為0 就能保證最小
        for (int i = 0; i < n; i++) {
            if (s[i] == '0')
                a[i] = b[i] = '0';
            else if (s[i] == '1') {
                if (!big) {
                    a[i] = '1'; // 讓a是大的那一方
                    b[i] = '0';
                    big = 1;
                } else {
                    a[i] = '0';
                    b[i] = '1';
                }
            } else if (s[i] == '2') {
                if (!big)
                    a[i] = b[i] = '1';
                else {
                    a[i] = '0';
                    b[i] = '2';
                }
            }
        }
        puts(a);
        puts(b);
    }
    return 0;
}