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
#define FORU(i,a,b) for(int (i)=(a);(i)<=(b);(i++))
#define FORL(i,a,b) for(int (i)=(b);(i)>=(a);(i--))
using namespace std;
const int N = 2e5 + 5;
int a[N];
map<int, int>mp;
void solve()
{
    mp.clear();
    int n; cin >> n;
    FORU(i, 1, n)
    {
        cin >> a[i];
        mp[a[i]]++;
    }
    int flag = 0;
    if (mp[1])
    {
        FORU(i, 1, n)
        {
            if (mp[a[i] - 1] || mp[a[i] + 1])
            {
                flag = 1;
            }
        }
    }
    if (flag)
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
    }
}

signed main()
{
    IOS;
    int t; cin >> t; while (t--)
        solve();
}