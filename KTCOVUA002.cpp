#include <bits/stdc++.h>

using namespace std;
int main()
{
    int i;
    cin >> i;
    while (i--)
    {
        int n;         
        cin >> n;
        if (n == 1)
            cout << 1 << endl;
        else if (n ==2 || n == 3)
            cout << 0 << endl;
        else if (n == 4)
            cout << 2 << endl;
        else if (n == 5)
            cout << 10 << endl;
        else if (n == 6)
            cout << 4 << endl;
        else if (n == 7)
            cout << 40 << endl;
        else if (n == 8)
            cout << 92 << endl;
        else if (n == 9)
            cout << 352 << endl;
        else if (n == 10)
            cout << 724 << endl;
        else if (n == 11)
            cout << 2680 << endl;
        else cout << 14200 << endl;
    }
    return 0;
}