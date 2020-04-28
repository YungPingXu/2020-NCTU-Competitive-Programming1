#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int n, m, q;
    scanf("%d%d%d", &n, &m, &q);
    map<int, int> cho;
    cho[0] = 1 << 30;
    cho[1 << 30] = 0;
    ll res = (ll)n * m;
    while (q--) {
        int x, y;
        scanf("%d%d", &x, &y);
        auto it = cho.lower_bound(x); // 取得大於等於x的最小的key
        if (y <= it->second) {
            puts("QAQ");
            continue;
        } else {
            int tmp = it->second;
            it--;
            vector<int> record;
            ll area = 0;
            while (1) {
                area += (ll)(min(it->second, y) - tmp) * (x - it->first); // 要加min否則一開始會錯
                if (it->second > y) break;
                record.push_back(it->first);
                tmp = it->second;
                it--;
            }
            for (int &i : record) cho.erase(i);
            cho[x] = y;
            printf("%lld\n", area);
            res -= area;
        }
    }
    printf("%lld\n", res);
    return 0;
}