#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    getchar();
    puts("Lumberjacks:");
    while (N--) {
        string s, tmp;
        getline(cin, s);
        vector<int> v;
        stringstream ss(s);
        while (getline(ss, tmp, ' ')) v.push_back(stoi(tmp));
        bool increase = true, decrease = true;
        for (int i = 1; i < v.size(); i++) {
            if (v[i] < v[i - 1]) increase = false;
            if (v[i] > v[i - 1]) decrease = false;
        }
        if (increase || decrease)
            puts("Ordered");
        else
            puts("Unordered");
    }
    return 0;
}