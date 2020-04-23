#include<bits/stdc++.h>

using namespace std;

int cnt = 0;

void recur(int done, int row, int col) {
    static int ans[9] = {0}; // col i is placed on row ans[i];
    if (done == 8) {
        if (ans[col] == row) {
            cnt++;
            printf("%2d     ", cnt);
            for (int i = 1; i <= 8; i ++)
                printf("%2d",ans[i]);
            puts("");
        }
        return;
    }
    for (int pos = 1; pos <= 8; pos++) {
        bool flag = false;
        for (int i = 1; i <= done && !flag; i++) {
            if (ans[i] == pos) flag = true;
            if (abs(ans[i]-pos) == done + 1 - i) flag = true;
        }
        if (flag) continue;
        ans[done+1] = pos;
        recur(done+1, row, col);
    }
}

void solve() {
    puts("SOLN       COLUMN\n #      1 2 3 4 5 6 7 8\n");
    int row, col;
    scanf("%d %d", &row, &col);
    cnt = 0;
    recur(0, row, col);
}

int main() {
    int ncases;
    scanf("%d",&ncases);
    while (ncases--) {
        solve();
        if (ncases) puts("");
    }
    return 0;
}
