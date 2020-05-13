#include <bits/stdc++.h>
using namespace std;

int main() {
    set<int> s;
    int n, tmp;
    cin >> n;
    while (n--) {
        cin >> tmp;
        s.insert(tmp);
    }
    cout << s.size();
    return 0;
}