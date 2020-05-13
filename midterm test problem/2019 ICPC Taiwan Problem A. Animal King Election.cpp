#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    int lion = 0, tiger = 0;
    while (getline(cin, s)) {
        if (s == "Lion")
            lion++;
        else if (s == "Tiger")
            tiger++;
    }
    if (lion >= 5)
        puts("Lion");
    else
        puts("Tiger");
    return 0;
}