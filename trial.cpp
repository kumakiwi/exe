#include<iostream>
#include<vector>
#include<cstdio>
#include<cstdlib>
#include<string>
using namespace std;
//void multi(char multi[], char result[]);

int main(void)
{
    char s[6] = {'0'};
    while(cin>>s)
    {
        int int_s[6] = {0};
        for (int i = 0; i < 6;i++)
        {
            char temp_s = s[i];
            int temp_s_int = 0;
            temp_s_int = (int)(s[i]-'0');
            cout << temp_s_int;
        }

    }

    return 0;

}

