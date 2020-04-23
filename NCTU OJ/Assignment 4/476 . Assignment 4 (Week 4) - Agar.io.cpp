#include <bits/stdc++.h>
using namespace std;

int main() {
    string s, tmp;
    while (getline(cin, s)) {
        vector<int> v;
        stringstream ss(s);
        while (getline(ss, tmp, ' ')) {
            int n;
            stringstream stmp(tmp);
            stmp >> n;
            v.push_back(n);
        }
        int max = -2147483647;
        for (int i : v)
            if (i > max) max = i;
        int low = 1, upper = max, mid = upper;
        while (low <= upper) {
            bool flag = false;
            double btmp = mid;
            for (double i : v) {
                if (btmp == i)
                    continue;
                else if (btmp > i)
                    btmp = btmp + ceil(i / 2);
                else
                    btmp = floor(btmp / 2);
                if (btmp == 0) {
                    flag = true;
                    break;
                }
            }
            if (flag)
                low = mid + 1;
            else
                upper = mid - 1;
            mid = (low + upper) / 2;
        }
        cout << mid + 1 << endl;
    }
    return 0;
}