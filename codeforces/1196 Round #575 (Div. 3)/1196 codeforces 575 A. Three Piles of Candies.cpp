#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int q;
    scanf("%d", &q);
    while (q--) {
        ll a, b, c;
        scanf("%lld%lld%lld", &a, &b, &c);
        printf("%lld\n", (a + b + c) / 2);
    }
    return 0;
}