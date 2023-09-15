#include <bits/stdc++.h>
 
using namespace std;
int sodu(string s, int m)
{
    int dai = s.length();
    int so, du = 0;
    for (int i = 0; i < dai; i++)
    {
        so = du * 10 + (s[i] - '0');
        du = so % m;
    }
    return du;
}
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        string x, y = "";
        long long n, m;
        cin >> x >> n >> m;
        for (long long i = 0; i < n; i++)
        {
            y = y + x;
        }    
        cout << sodu(y, m) << " " << endl;
    }
    return 0;
}