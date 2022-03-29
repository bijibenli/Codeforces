#include<iostream>
#include<algorithm>
#include<iomanip>
#include<queue>
#include<stack>
#include<map>
#include<set>
#include<string>
#include<cmath>
#include<vector>
#include<string.h>
#define INF 0x3f3f3f3f
#define PI acos(-1)
#define int long long
#define IOS ios::sync_with_stdio(false);cin.tie(0), cout.tie(0)
#define mod 998244353
using namespace std;
const int N = 2e5 + 5;
int a[N];
void solve()
{
	int n;
	cin >> n; int flag = 0;
	vector<int> a(n + 1, 0);

	for (int i = 1; i <= n; i++)
	{
		cin >> a[i];
	}

	int one = 0, num = 0;
	for (int i = 1; i <= n; i++)
	{
		if (a[i] == 1) {
			one = i;
			num++;
		}
	}

	if (num != 1) flag = 1;//必定存在一个1

	vector<int> b;
	for (int i = one; i <= n; i++)
	{
		b.push_back(a[i]);
	}
	for (int i = 1; i <= one - 1; i++)
	{
		b.push_back(a[i]);
	}

	for (int i = 1; i <= n; i++)
	{
		int nxt = i + 1 > n ? 1 : i + 1;
		if (a[nxt] > a[i] && a[nxt] - a[i] > 1) flag = 1;
	}
	if (flag)cout << "no" << endl;
	else cout << "yes" << endl;

}

signed main()
{
	IOS;
	int t; cin >> t; while (t--)
		solve();
}