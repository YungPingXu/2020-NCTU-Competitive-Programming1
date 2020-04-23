#include <bits/stdc++.h>
using namespace std;

int a[1000005];

int main() {
    int testcase;
    scanf("%d", &testcase);
    while (testcase--) {
        int n;
        scanf("%d", &n);
        int ans = 0;
        for (int i = 0; i < n; i++) scanf("%d", &a[i]);
        
        printf("%d\n", ans);
    }
    return 0;
}