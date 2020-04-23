#include <bits/stdc++.h>
using namespace std;

int main() {
    map<char, vector<pair<int, int>>> m;
    m['L'] = {{0, 1}, {0, 2}, {1, 2}, {2, 2}};
    m['J'] = {{0, 1}, {0, 2}, {1, 1}, {2, 1}};
    m['O'] = {{0, 1}, {0, 2}, {1, 1}, {1, 2}};
    m['I'] = {{0, 1}, {1, 1}, {2, 1}, {3, 1}};
    m['Z'] = {{0, 1}, {0, 2}, {1, 2}, {1, 3}};
    m['S'] = {{0, 2}, {0, 3}, {1, 2}, {1, 1}};
    m['T'] = {{0, 2}, {1, 1}, {1, 2}, {1, 3}};
    int P, W;
    cin >> P >> W;
    vector<char> v[W];
    while (P--) {
        char c;
        string s;
        cin >> c >> s;
        int rightmost = W;
        vector<pair<int, int>> block = m[c];
        for (auto ch : s) {
            if (ch == '<') {
                bool flag = true;
                for (auto tmp : block)
                    if (!(rightmost - tmp.second - 1 >= 0)) flag = false;
                if (flag) rightmost--;
            } else if (ch == '>') {
                bool flag = true;
                for (auto tmp : block)
                    if (!(rightmost - tmp.second + 1 < W)) flag = false;
                if (flag) rightmost++;
            }
        }
        int lowermost=0,maxheight=0;
        for (auto tmp : block)
            if (v[rightmost - tmp.second].size() > lowermost)
                lowermost = v[rightmost - tmp.second].size();
        if (lowermost != 0) {
            bool stop;
            do {
                lowermost--;
                stop = true;
                for (auto tmp : block) {
                    if (lowermost + tmp.first < v[rightmost - tmp.second].size()) {
                        if (!(v[rightmost - tmp.second][lowermost + tmp.first] == '0')) {
                            stop = false;
                            break;
                        }
                    }
                }
            } while (stop);
            lowermost++;
        }
        for (auto tmp : block) {
            while (lowermost + tmp.first != v[rightmost - tmp.second].size())
                v[rightmost - tmp.second].push_back('0');
            v[rightmost - tmp.second].push_back(c);
        }
        for (int i = 0; i < W; i++)
            if (v[i].size() > maxheight) maxheight = v[i].size();
        for (int i = 0; i < maxheight;) {
            bool flag = true;
            for (int j = 0; j < W; j++) {
                if (i >= v[j].size()) {
                    flag = false;
                    break;
                }
            }
            if (flag) {
                bool eliminate = true;
                for (int j = 0; j < W; j++) {
                    if (v[j][i] == '0') {
                        eliminate = false;
                        break;
                    }
                }
                if (eliminate)
                    for (int j = 0; j < W; j++)
                        v[j].erase(v[j].begin() + i);
                else
                    i++;
            } else
                i++;
            maxheight = 0;
            for (int j = 0; j < W; j++)
                if (v[j].size() > maxheight) maxheight = v[j].size();
        }
        for (int i = 0; i < W; i++)
            while (!v[i].empty() && v[i].back() == '0') v[i].pop_back();
    }
    int ans = 0;
    for (int i = 0; i < W; i++)
        if (v[i].size() > ans) ans = v[i].size();
    cout << ans << endl;
    return 0;
}