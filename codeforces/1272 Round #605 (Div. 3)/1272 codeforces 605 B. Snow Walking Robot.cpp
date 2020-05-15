#include <bits/stdc++.h>
using namespace std;

int main() {
    int q;
    scanf("%d", &q);
    getchar();
    while (q--) {
        string s;
        map<char, int> m;
        getline(cin, s);
        for (char &c : s) m[c]++;
        m['L'] = min(m['L'], m['R']);
        m['R'] = min(m['L'], m['R']);
        m['U'] = min(m['U'], m['D']);
        m['D'] = min(m['U'], m['D']);
        int cnt = 4;
        if (m['L'] == 0) cnt--;
        if (m['R'] == 0) cnt--;
        if (m['U'] == 0) cnt--;
        if (m['D'] == 0) cnt--;
        if (cnt == 0)
            puts("0");
        else if (cnt == 2) {
            printf("2\n");
            if (m['L'] != 0) printf("L");
            if (m['R'] != 0) printf("R");
            if (m['U'] != 0) printf("U");
            if (m['D'] != 0) printf("D");
            puts("");
        } else if (cnt == 4) {
            printf("%d\n", m['L'] + m['R'] + m['U'] + m['D']);
            for (int i = 0; i < m['L']; i++) printf("L");
            for (int i = 0; i < m['U']; i++) printf("U");
            for (int i = 0; i < m['R']; i++) printf("R");
            for (int i = 0; i < m['D']; i++) printf("D");
            puts("");
        }
    }
    return 0;
}