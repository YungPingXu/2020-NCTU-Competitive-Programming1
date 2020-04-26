#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    scanf("%d%d", &n, &m);
    vector<priority_queue<int, vector<int>, greater<int>>*> p(1 + n);
    for (int i = 1; i <= n; i++) p[i] = new priority_queue<int, vector<int>, greater<int>>();
    while (m--) {
        char s[8];
        int i, j;
        scanf("%s", s);
        if (s[0] == 'i') {
            scanf("%d%d", &i, &j);
            p[i]->push(j);
        } else if (s[0] == 'j') {
            scanf("%d%d", &i, &j);
            if (p[j]->size() > p[i]->size()) {
                auto tmp = p[j];
                p[j] = p[i];
                p[i] = tmp;
            } // 當p[j]的大小比p[i]大很多時，會是非常耗時的操作，所以把它變成從小的移到大的
            while (!p[j]->empty()) {
                p[i]->push(p[j]->top());
                p[j]->pop();
            }
        } else if (s[0] == 'e') {
            scanf("%d", &i);
            if (!p[i]->empty()) {
                printf("%d\n", p[i]->top());
                p[i]->pop();
            } else
                puts("NULL");
        } else if (s[0] == 'l') {
            scanf("%d", &i);
            if (!p[i]->empty())
                printf("%d\n", p[i]->top());
            else
                puts("NULL");
        }
    }
    return 0;
}