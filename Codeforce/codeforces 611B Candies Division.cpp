#include <iostream>
using namespace std;

int main() {
    int t, n, k;
    cin >> t;
    while (t--) {
        cin >> n >> k;
        if (k / 2 < n % k)
            cout << n - n % k + k / 2 << endl;
        else
            cout << n - n % k + n % k << endl;
    }
    return 0;
}