#include<iostream>
#include<queue>
using namespace std;

int main(){
    priority_queue<int, vector<int>, greater<int>> p;
    for (int i = 0; i < 10; i++) p.push(i);
    cout << p.top();
    return 0;
}