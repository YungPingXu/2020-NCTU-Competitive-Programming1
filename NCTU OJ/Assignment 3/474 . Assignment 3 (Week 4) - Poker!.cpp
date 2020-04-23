#include <bits/stdc++.h>
using namespace std;

void read_input(vector<int> &rank, vector<char> &color, int n) {
    rank.push_back(0);
    color.push_back('#');
    string s;
    for (int i = 1; i <= n; i++) {
        cin >> s;
        if (s == "J") {
            rank.push_back(14);
            color.push_back('J');
        } else {
            char c = s[s.length() - 1];
            int r;
            s.erase(s.length() - 1, 1);
            stringstream ss(s);
            ss >> r;
            rank.push_back(r);
            color.push_back(c);
        }
    }
}
void beginning(vector<int> &rank, vector<char> &color) {
    for (int i = 1; i <= 13; i++) {
        int cnt = 0;
        for (auto j : rank)
            if (j == i) cnt++;
        if (cnt == 2 || cnt == 4) {
            for (auto it = rank.begin(); it != rank.end();) {
                if (*it == i) {
                    int index = it - rank.begin();
                    it = rank.erase(rank.begin() + index);
                    color.erase(color.begin() + index);
                } else
                    it++;
            }
        } else if (cnt == 3) {
            cnt = 2;
            for (auto it = rank.begin(); it != rank.end();) {
                if (*it == i && cnt > 0) {
                    int index = it - rank.begin();
                    it = rank.erase(rank.begin() + index);
                    color.erase(color.begin() + index);
                    cnt--;
                } else
                    it++;
            }
        }
    }
}
bool check_stop(vector<int> rank[], int n, int &loser) {
    bool stop = false;
    if (rank[n].size() == 1) {
        for (int x = 1; x <= 3; x++) {
            for (auto y : rank[x]) {
                if (y == 14) {
                    loser = x;
                    stop = true;
                    break;
                }
            }
            if (stop) break;
        }
    }
    return stop;
}
int main() {
    string name[5] = {"", "Alice", "Bob", "Carol", "Good Game"};
    int T;
    cin >> T;
    while (T--) {
        int n[4], r[4];
        vector<int> rank[4], S[4];
        vector<char> color[4];
        for (int i = 1; i <= 3; i++) {
            cin >> n[i];
            read_input(rank[i], color[i], n[i]);
            beginning(rank[i], color[i]);
        }
        for (int i = 1; i <= 3; i++) {
            cin >> r[i];
            S[i].push_back(0);
            for (int j = 1; j <= r[i]; j++) {
                int tmp;
                cin >> tmp;
                S[i].push_back(tmp);
            }
        }
        int round = 1, count = 0, i = 1, loser, check = 0;
        bool only_joker = false;
        for (int i = 1; i <= 3; i++) {
            if (rank[i].size() == 1)
                check++;
            else {
                if (rank[i].size() == 2 && rank[i][1] == 14) {
                    only_joker = true;
                    loser = i;
                }
            }
        }
        if (!(check == 2 && only_joker)) {
            while (1) {
                int next = i % 3 + 1;
                int t = rank[next].size() - 1;
                if (check_stop(rank, next, loser)) break;
                int k = 1 + (S[i][(round - 1) % r[i] + 1] + t - 1) % t;
                int tmp = rank[next][k];
                char c = color[next][k];
                rank[next].erase(rank[next].begin() + k);
                color[next].erase(color[next].begin() + k);
                rank[i].push_back(tmp);
                color[i].push_back(c);
                if (check_stop(rank, next, loser)) break;
                bool have_pair = false;
                for (auto it = rank[i].begin(); it != rank[i].end() - 1; it++) {
                    if (*it == rank[i].back()) {
                        int index = it - rank[i].begin();
                        rank[i].erase(it);
                        color[i].erase(color[i].begin() + index);
                        have_pair = true;
                        break;
                    }
                }
                if (have_pair) {
                    rank[i].pop_back();
                    color[i].pop_back();
                    if (check_stop(rank, i, loser)) break;
                }
                i = next;
                if (round == 100000) {
                    loser = 4;
                    break;
                }
                count++;
                if (count == 3) {
                    round++;
                    count = 0;
                }
            }
        }
        cout << name[loser] << endl;
    }
    return 0;
}