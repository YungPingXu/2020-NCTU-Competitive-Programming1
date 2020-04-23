#include <bits/stdc++.h>
using namespace std;

int main() {
    int T, M;
    cin >> T;
    for (int i = 1; i <= T; i++) {
        cin >> M;
        getchar();
        string s, tmp;
        int oudlers = 0, points;
        double values = 0.0;
        while (M--) {
            getline(cin, s);
            if (s == "one of trumps" || s == "twenty-one of trumps" || s == "fool") {
                oudlers++;
                values += 4.5;
            } else {
                stringstream ss(s);
                getline(ss, tmp, ' ');
                if (tmp == "king")
                    values += 4.5;
                else if (tmp == "queen")
                    values += 3.5;
                else if (tmp == "knight")
                    values += 2.5;
                else if (tmp == "jack")
                    values += 1.5;
                else
                    values += 0.5;
            }
        }
        if (oudlers == 3)
            points = 36;
        else if (oudlers == 2)
            points = 41;
        else if (oudlers == 1)
            points = 51;
        else if (oudlers == 0)
            points = 56;
        printf("Hand #%d\n", i);
        if (values >= points)
            printf("Game won by %d point(s).\n", (int)values - points);
        else
            printf("Game lost by %d point(s).\n", points - (int)values);
        if (i != T) puts("");
    }
    return 0;
}