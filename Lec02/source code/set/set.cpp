#include<bits/stdc++.h>

using namespace std;

int main() {
    char *buf = (char*)malloc(sizeof(char)*15*1024*1024);
    set<string> s;
    while (scanf("%s",buf) == 1) {
        s.insert(string(buf));
    }
    for (auto& e: s) {
        printf("%s\n",e.c_str());
    }
}
