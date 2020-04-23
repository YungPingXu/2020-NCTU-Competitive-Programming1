#include<bits/stdc++.h>

using namespace std;

int main() {
    char *buf = (char*)malloc(sizeof(char)*15*1024*1024);
    unordered_map<string,int> cnt;
    while (scanf("%s",buf) == 1) {
        cnt[string(buf)] += 1;
    }
    for (auto &kv: cnt) {
        printf("%s: %d\n",kv.first.c_str(), kv.second);
    }
}
