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

void solve()
{
    int n; cin >> n;
    if (n == 1)
    {
        int x; cin >> x;
        cout << 1 << " " << 1 << endl;
        return;
    }
    int mx = 0, mi = INF;
    int mx_sz = 0, mi_sz = 0;
    FORU(i, 1, n)
    {
        int x; cin >> x;
        if (mx < x)
        {
            mx = x;
            mx_sz = i;
        }
        if (mi > x)
        {
            mi = x;
            mi_sz = i;
        }
    }
    cout << mi_sz << " " << mx_sz << endl;
}

signed main()
{
    IOS;
    int t; cin >> t; while (t--)
        solve();
}