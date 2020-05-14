#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, n, a, b;
    scanf("%d", &t);
    while (t--) {
        scanf("%d%d%d", &n, &a, &b);
        if (a == b)
            for (int i = 0; i < n; i++) printf("%c", 'a' + i % a); // ex: a=4 b=4 abcdabcdabcd....
        else if (b == 1)
            for (int i = 0; i < n; i++) printf("%c", 'a');
        else { // ex: a=5 b=3 abaacbaacba...
            char ans[n];
            for (int i = 0; i < n; i++) {
                if (i < b - 1)
                    ans[i] = 'a' + i;
                else if (i >= b - 1 && i < a - 1)
                    ans[i] = 'a';
                else if (i == a - 1)
                    ans[i] = 'a' + b - 1;
                else
                    ans[i] = ans[i - a + 1];
            }
            for (int i = 0; i < n; i++) printf("%c", ans[i]);
        }
        puts("");
    }
    return 0;
}