#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    scanf("%d%d", &n, &m);
    priority_queue<int, vector<int>, greater<int>> p[n];
    while (m--) {
        char s[8];
        int i, j;
        scanf("%s", s);
        if (s[0] == 'i') {
            scanf("%d%d", &i, &j);
            p[i - 1].push(j);
        } else if (s[0] == 'j') {
            scanf("%d%d", &i, &j);
            while (!p[j - 1].empty()) {
                p[i - 1].push(p[j - 1].top());
                p[j - 1].pop();
            }
        } else if (s[0] == 'e') {
            scanf("%d%d", &i, &j);
            if (!p[i - 1].empty()) {
                printf("%d\n", p[i - 1].top());
                p[i - 1].pop();
            } else
                puts("NULL");
        } else if (s[0] == 'l') {
            scanf("%d", &i);
            if (!p[i - 1].empty())
                printf("%d\n", p[i - 1].top());
            else
                puts("NULL");
        }
    }
    return 0;
}