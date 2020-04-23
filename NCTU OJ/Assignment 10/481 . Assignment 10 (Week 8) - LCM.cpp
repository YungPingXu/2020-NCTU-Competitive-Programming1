#include<iostream>
using namespace std;

int main(){
    long long a = 1000000000000000000;
    long long b=1000000000000000000;
    for (long long i = 1; i < a;i++){
        cout<<b--<<endl;
    }
    cout << b;
    return 0;
}