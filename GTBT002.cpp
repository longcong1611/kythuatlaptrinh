#include <bits/stdc++.h>

using namespace std;
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        double x, sum = 0.0, tong = 1.0;
        int n, m = 1;
        cin >> n >> x;
        for (int i = 1; i <= n; i++)
        {
            tong *= x;
            m *= i;
            sum += tong / (double)m;
        }
        cout << fixed << setprecision(3) << sum << "" << endl;
    }
    return 0;
}