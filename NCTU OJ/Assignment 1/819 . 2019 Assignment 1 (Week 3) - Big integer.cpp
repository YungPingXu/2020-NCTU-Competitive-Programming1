#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int d = 9;
ll M = 1000000000;

list<ll> stolist(string s) {
    list<ll> result;
    while (!s.empty()) {
        string tmp = "";
        for (int i = 0; i < d && !s.empty(); i++) {
            tmp += s.back();
            s.pop_back();
        }
        reverse(tmp.begin(), tmp.end());
        result.push_front(stoll(tmp));
    }
    return result;
}

list<ll> Add(list<ll> a, list<ll> b) {
    list<ll> result;
    ll carry = 0;
    while (!a.empty() || !b.empty()) {
        ll x = a.empty() ? 0 : a.back();
        ll y = b.empty() ? 0 : b.back();
        ll sum = x + y + carry;
        carry = sum / M;
        sum %= M;
        result.push_front(sum);
        if (!a.empty()) a.pop_back();
        if (!b.empty()) b.pop_back();
    }
    if (carry) result.push_front(carry);
    while (!result.empty() && result.front() == 0) result.pop_front();
    return result;
}
void output(const list<ll>& l) {
    if (l.empty()) {
        printf("0\n");
        return;
    }
    for (auto it = l.begin(); it != l.end(); it++) {
        if (it == l.begin())
            printf("%lld", *it);
        else
            printf("%09lld", *it);
    }
    puts("");
}
int main() {
    string s;
    while (getline(cin, s)) {
        stringstream ss(s);
        string tmp;
        list<ll> ans;
        while (getline(ss, tmp, ' '))
            ans = Add(ans, stolist(tmp));
        output(ans);
    }
    return 0;
}