#include <bits/stdc++.h>
#define N 1000000

using namespace std;
int n, k, a[N];
bool b[N];
int main()
{
	int test;
	cin >> test;
	while (test--)
	{
		cin >> n >> k;
		for (int i = 1; i <= n; i++)
		{
			a[i] = i;
		}
		if (k == 0)
		{
			for (int i = 1; i < n; i++)
			{
				cout << a[i] << " ";
			}
			cout << a[n] << endl;
		}
		else if (n % 2)
		{
			cout << -1 << endl;
		}
		else
		{
			int i = 1;
			while (1)
			{
				if (b[i] == false && i + k <= n)
				{
					swap (a[i], a[i + k]);
					b[i] = true;
					b[i + k] = true;
				}
				else if (b[i] == true)
				{
					i++;
				}
				else break;
			}
			if (count(b + 1, b +1 + n, false))
				cout << -1 << endl;
			else for (int i = 1; i < n; i++)
			{
				cout << a[i] << " ";
			}
			cout << a[n] << endl;
			
		}
		
	}
	return 0;
}