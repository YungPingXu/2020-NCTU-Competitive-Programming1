#include <iostream>
using namespace std;

int main() {
    int t, s;
    cin >> t;
    while (t--) {
        cin >> s;
        int ans = 0;
        while (s >= 10) {
            int temp = s / 10;
            ans += temp * 10;
            s -= temp * 10;
            s += temp;
        }
        cout << ans + s << endl;
    }
    return 0;
}