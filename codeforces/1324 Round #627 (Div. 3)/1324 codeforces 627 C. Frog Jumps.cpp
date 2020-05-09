#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    getchar();
    while (n--) {
        string s;
        getline(cin, s);
        s = "R" + s + "R";
        int d = 0, pre = 0;
        for (int i = 0; i < s.length(); i++) { // 不需要走L
            if (s[i] == 'R') {
                if (i - pre > d) {
                    d = i - pre;
                }
                pre = i;
            }
        }
        cout << d << endl;
    }
    return 0;
}