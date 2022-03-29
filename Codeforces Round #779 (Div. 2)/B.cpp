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
#define mod 998244353
using namespace std;
const int N = 2e5 + 5;

void solve()
{
    int n; cin >> n;
    int sum = 1;
    if (n & 1)
    {
        cout << 0 << endl;
        return;
    }
    n >>= 1;
    //cout << n << endl;
    while (n)
    {
        sum *= n;
        sum %= mod;
        n--;
    }
    sum *= sum;
    sum %= mod;
    cout << sum << endl;
}

signed main()
{
    IOS;
    int t; cin >> t; while (t--)
        solve();
}