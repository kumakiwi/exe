#include<iostream>
using namespace std;
int main()
{
    string s;
    cin >> s;
    for(int i = 0;i < s.length();i++)
    {
        cout << s[i] << endl;
        cout << (int)(s[i] - '0');
    }
    return 0;

}
