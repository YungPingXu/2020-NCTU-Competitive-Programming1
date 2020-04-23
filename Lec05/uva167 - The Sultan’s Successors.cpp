#include <bits/stdc++.h>
using namespace std;

int result[9] = {0}, cnt, score[9][9], maxsum = 0;

void solve(int done, int row, int col) {
    if (done == 8) {
        if (result[col] == row) {
            int sum = 0;
            for (int i = 1; i <= 8; i++)
                sum += score[result[i]][i];
            maxsum = max(maxsum, sum);
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
    int k;
    cin >> k;
    while (k--) {
        maxsum = 0;
        for (int i = 1; i <= 8; i++)
            for (int j = 1; j <= 8; j++)
                cin >> score[i][j];
        for (int row = 1; row <= 8; row++) {
            for (int col = 1; col <= 8; col++) {
                for (int i = 0; i <= 8; i++) result[i] = 0;
                cnt = 0;
                solve(0, row, col);
            }
        }
        printf("%5d\n", maxsum);
    }
    return 0;
}