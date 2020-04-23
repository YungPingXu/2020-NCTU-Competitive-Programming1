#include <iostream>
using namespace std;

int main() {
    int t, a, b;
    cin >> t;
    while (t--) {
        cin >> a >> b;
        if (a == b)
            puts("0");
        else if (a > b) {
            if ((a - b) % 2 == 0)
                puts("1");
            else
                puts("2");
        } else {
            if ((b - a) % 2 == 0)
                puts("2");
            else
                puts("1");
        }
    }
    return 0;
}