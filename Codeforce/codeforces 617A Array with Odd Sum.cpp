#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n], odd_num = 0, even_num = 0;
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < n; i++) {
            if (a[i] % 2 == 1)
                odd_num++;
            else
                even_num++;
        }
        if (odd_num == 0)
            puts("NO");  // 沒有任何奇數就一定不能
        else {
            if (odd_num % 2 == 1)  // 有奇數個奇數就行
                puts("YES");
            else {
                if (even_num != 0)  // 偶數個奇數以及有偶數就行
                    puts("YES");
                else
                    puts("NO");
            }
        }
    }
    return 0;
}