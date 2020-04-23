#include <iostream>
#include <sstream>
#include <vector>
#include <math.h>
#include <algorithm>
using namespace std;

vector<long long> solve1(vector<long long> &v)
{
    long long n = sqrt(v[0]);
    return n * n == v[0] ? vector<long long>{n} : vector<long long>();
}
vector<long long> solve2(vector<long long> &v)
{
    vector<long long> num(2);
    num[0] = sqrt(v[0]);
    num[1] = sqrt(v[3]);
    vector<long long> compared;
    for (int i = 0; i < 2; i++)
        for (int j = 0; j < 2; j++)
            compared.push_back(num[i] * num[j]);
    sort(compared.begin(), compared.end());
    return compared == v ? num : vector<long long>();
}
vector<long long> solve3(vector<long long> &v)
{
    vector<long long> num(3);
    num[0] = sqrt(v[0]);
    num[1] = v[1] / num[0];
    num[2] = sqrt(v[8]);
    vector<long long> compared;
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            compared.push_back(num[i] * num[j]);
    sort(compared.begin(), compared.end());
    return compared == v ? num : vector<long long>();
}
vector<long long> solve4(vector<long long> &v)
{
    vector<long long> num(4);
    num[0] = sqrt(v[0]);
    num[1] = v[1] / num[0];
    num[3] = sqrt(v[15]);
    num[2] = v[14] / num[3];
    vector<long long> compared;
    for (int i = 0; i < 4; i++)
        for (int j = 0; j < 4; j++)
            compared.push_back(num[i] * num[j]);
    sort(compared.begin(), compared.end());
    return compared == v ? num : vector<long long>();
}
vector<long long> solve5(vector<long long> &v)
{
    vector<long long> num(5);
    num[0] = sqrt(v[0]);
    num[1] = v[1] / num[0];
    num[2] = v[4] / num[0];
    num[4] = sqrt(v[24]);
    num[3] = v[23] / num[4];
    vector<long long> compared;
    for (int i = 0; i < 5; i++)
        for (int j = 0; j < 5; j++)
            compared.push_back(num[i] * num[j]);
    sort(compared.begin(), compared.end());
    return compared == v ? num : vector<long long>();
}
int main()
{
    string s;
    while (getline(cin, s))
    {
        stringstream ss(s);
        string split;
        vector<long long> input;
        while (getline(ss, split, ' '))
        {
            stringstream ssplit(split);
            long long n;
            ssplit >> n;
            input.push_back(n);
        }
        sort(input.begin(), input.end());
        vector<long long> ans;
        switch (input.size())
        {
        case 1:
            ans = solve1(input);
            break;
        case 4:
            ans = solve2(input);
            break;
        case 9:
            ans = solve3(input);
            break;
        case 16:
            ans = solve4(input);
            break;
        case 25:
            ans = solve5(input);
            break;
        }
        if (ans.empty())
            puts("No");
        else
        {
            puts("Yes");
            for (vector<long long>::iterator it = ans.begin(); it != ans.end(); it++)
                cout << *it << " ";
        }
    }
    return 0;
}