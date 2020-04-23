#include<bits/stdc++.h>

using namespace std;

int main() {
    char *buf = (char*)malloc(sizeof(char)*15*1024*1024);
    map<string,int> cnt;
    while (scanf("%s",buf) == 1) {
        cnt[string(buf)] += 1;
    }
    for (auto& [k, v]: cnt) {
        printf("%s: %d\n",k.c_str(), v);
    }
}
