#include <bits/stdc++.h>
using namespace std;
int main() {
    int s;
    string n;
    while (cin >> s >> n && s != 0) {
        string num[10][2 * s + 3], ans[10];
        for (int i = 0; i < 2 * s + 3; i++) {
            if (i == 0 || i == 2 * s + 2) {
                num[0][i] += " ";
                for (int j = 1; j <= s; j++) num[0][i] += "-";
                num[0][i] += " ";
            } else if (i == (2 * s + 3) / 2) {
                for (int j = 0; j < s + 2; j++) num[0][i] += " ";
            } else {
                num[0][i] += "|";
                for (int j = 1; j <= s; j++) num[0][i] += " ";
                num[0][i] += "|";
            }
        }
        for (int i = 0; i < 2 * s + 3; i++) {
            if (i == 0 || i == 2 * s + 2 || i == (2 * s + 3) / 2) {
                for (int j = 1; j <= s + 2; j++) num[1][i] += " ";
            } else {
                for (int j = 1; j <= s + 1; j++)
                    num[1][i] += " ";
                num[1][i] += "|";
            }
        }
        for (int i = 0; i < 2 * s + 3; i++) {
            if (i == 0 || i == 2 * s + 2 || i == (2 * s + 3) / 2) {
                num[2][i] += " ";
                for (int j = 1; j <= s; j++) num[2][i] += "-";
                num[2][i] += " ";
            } else {
                if (i < (2 * s + 3) / 2) {
                    for (int j = 1; j <= s + 1; j++) num[2][i] += " ";
                    num[2][i] += "|";
                } else {
                    num[2][i] += "|";
                    for (int j = 1; j <= s + 1; j++) num[2][i] += " ";
                }
            }
        }
        for (int i = 0; i < 2 * s + 3; i++) {
            if (i == 0 || i == 2 * s + 2 || i == (2 * s + 3) / 2) {
                num[3][i] += " ";
                for (int j = 1; j <= s; j++) num[3][i] += "-";
                num[3][i] += " ";
            } else {
                for (int j = 1; j <= s + 1; j++) num[3][i] += " ";
                num[3][i] += "|";
            }
        }
        for (int i = 0; i < 2 * s + 3; i++) {
            if (i == 0 || i == 2 * s + 2) {
                for (int j = 1; j <= s + 2; j++) num[4][i] += " ";
            } else if (i == (2 * s + 3) / 2) {
                num[4][i] += " ";
                for (int j = 1; j <= s; j++) num[4][i] += "-";
                num[4][i] += " ";
            } else {
                if (i < (2 * s + 3) / 2) {
                    num[4][i] += "|";
                    for (int j = 1; j <= s; j++) num[4][i] += " ";
                    num[4][i] += "|";
                } else {
                    for (int j = 1; j <= s + 1; j++) num[4][i] += " ";
                    num[4][i] += "|";
                }
            }
        }
        for (int i = 0; i < 2 * s + 3; i++) {
            if (i == 0 || i == 2 * s + 2 || i == (2 * s + 3) / 2) {
                num[5][i] += " ";
                for (int j = 1; j <= s; j++) num[5][i] += "-";
                num[5][i] += " ";
            } else {
                if (i < (2 * s + 3) / 2) {
                    num[5][i] += "|";
                    for (int j = 1; j <= s + 1; j++) num[5][i] += " ";
                } else {
                    for (int j = 1; j <= s + 1; j++) num[5][i] += " ";
                    num[5][i] += "|";
                }
            }
        }
        for (int i = 0; i < 2 * s + 3; i++) {
            if (i == 0 || i == 2 * s + 2 || i == (2 * s + 3) / 2) {
                num[6][i] += " ";
                for (int j = 1; j <= s; j++) num[6][i] += "-";
                num[6][i] += " ";
            } else {
                if (i < (2 * s + 3) / 2) {
                    num[6][i] += "|";
                    for (int j = 1; j <= s + 1; j++) num[6][i] += " ";
                } else {
                    num[6][i] += "|";
                    for (int j = 1; j <= s; j++) num[6][i] += " ";
                    num[6][i] += "|";
                }
            }
        }
        for (int i = 0; i < 2 * s + 3; i++) {
            if (i == 0) {
                num[7][i] += " ";
                for (int j = 1; j <= s; j++) num[7][i] += "-";
                num[7][i] += " ";
            } else if (i == 2 * s + 2 || i == (2 * s + 3) / 2) {
                for (int j = 1; j <= s + 2; j++) num[7][i] += " ";
            } else {
                for (int j = 1; j <= s + 1; j++)
                    num[7][i] += " ";
                num[7][i] += "|";
            }
        }
        for (int i = 0; i < 2 * s + 3; i++) {
            if (i == 0 || i == 2 * s + 2 || i == (2 * s + 3) / 2) {
                num[8][i] += " ";
                for (int j = 1; j <= s; j++) num[8][i] += "-";
                num[8][i] += " ";
            } else {
                num[8][i] += "|";
                for (int j = 1; j <= s; j++) num[8][i] += " ";
                num[8][i] += "|";
            }
        }
        for (int i = 0; i < 2 * s + 3; i++) {
            if (i == 0 || i == 2 * s + 2 || i == (2 * s + 3) / 2) {
                num[9][i] += " ";
                for (int j = 1; j <= s; j++) num[9][i] += "-";
                num[9][i] += " ";
            } else {
                if (i < (2 * s + 3) / 2) {
                    num[9][i] += "|";
                    for (int j = 1; j <= s; j++) num[9][i] += " ";
                    num[9][i] += "|";
                } else {
                    for (int j = 1; j <= s + 1; j++) num[9][i] += " ";
                    num[9][i] += "|";
                }
            }
        }
        for (int i = 0; i < n.length(); i++) {
            for (int j = 0; j < 2 * s + 3; j++) {
                ans[j] += num[n[i] - '0'][j];
                if (i != n.length() - 1) ans[j] += " ";
            }
        }
        for (int i = 0; i < 2 * s + 3; i++) cout << ans[i] << endl;
        cout << endl;
    }
    return 0;
}