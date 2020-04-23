#include <iostream>
#include<sstream>
using namespace std;

int main()
{
    string s;
    int t = 0;
    while (getline(cin, s))
    {
        if (t == 0)
            getline(cin, s);
        t++;
        getline(cin, s);
        int n = (s.size() - 1) / 10;
        int sheet[n][n], bingo[n][n];
        char c;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                scanf("|%d", &sheet[i][j]);
                bingo[i][j] = 0;
            }
            scanf("%c", &c);
            getchar();
            getline(cin, s);
        }
        /*cout << n << endl;
        for (int i = 0; i < n;i++){
            for (int j = 0; j < n;j++)
                cout << sheet[i][j] << " ";
            cout << endl;
        }*/
        while (getline(cin, s) && s.size() < 11)
        {
            int num;
            stringstream ss(s);
            ss >> num;
            bool exist = false;
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    if(sheet[i][j]==num){
                        bingo[i][j] = 1;
                        exist = true;
                        break;
                    }
                }
            }
            if(exist){
                int row = 0;
                for (int i = 0; i < n; i++)
                {
                    bool test = true;
                    for (int j = 0; j < n; j++)
                    {
                        if(bingo[i][j]==0){
                            test = false;
                            break;
                        }
                    }
                    if(test)
                        row++;
                }
                int column = 0;
                for (int i = 0; i < n; i++)
                {
                    bool test = true;
                    for (int j = 0; j < n; j++)
                    {
                        if(bingo[j][i]==0){
                            test = false;
                            break;
                        }
                    }
                    if(test)
                        column++;
                }
                cout << row << " " << column << endl;
            }
            //cout << s << endl;
        }
    }
    return 0;
}