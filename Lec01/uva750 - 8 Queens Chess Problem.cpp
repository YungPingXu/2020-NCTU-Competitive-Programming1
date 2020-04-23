#include <bits/stdc++.h>
using namespace std;

int result[9] = {0}, cnt;

void solve(int done, int row, int col) {
    if (done == 8) {
        if (result[col] == row) {
            printf("%2d     ", ++cnt);
            for (int i = 1; i <= 8; i++)
                printf("%2d", result[i]);
            puts("");
        }
        return;
    }
    for (int i = 1; i <= 8; i++) { // row
        bool flag = false;
        for (int j = 1; j <= done; j++) // check columns which are already done
            if (result[j] == i || abs(result[j] - i) == done + 1 - j)
                flag = true; // 同一列或在斜線上
        if (flag)
            continue;
        result[done + 1] = i;
        solve(done + 1, row, col);
    }
}
int main() {
    int n;
    cin >> n;
    while (n--) {
        int row, col;
        cin >> row >> col;
        for (int i = 0; i <= 8; i++)
            result[i] = 0;
        cnt = 0;
        puts("SOLN       COLUMN\n #      1 2 3 4 5 6 7 8\n");
        solve(0, row, col);
        if (n)
            puts("");
    }
    return 0;
}