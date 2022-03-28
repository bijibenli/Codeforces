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
map<int, int >a;
void solve()
{
    a.clear();
    int n; cin >> n;
    int k; cin >> k;
    int flag = 0;
    FORU(i, 1, n)
    {
        int x; cin >> x;
        a[x]++;
        //cout << a[x - k] << " " << a[x + k] << endl;
        if (a[x - k] || a[x + k])
        {
            flag++;
        }
    }
    if (flag)cout << "YES" << endl;
    else cout << "NO" << endl;
}

signed main()
{
    IOS;
    int t; cin >> t; while (t--)
        solve();
}