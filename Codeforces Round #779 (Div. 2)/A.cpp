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

void solve()
{
    int n; cin >> n;
    string s; cin >> s;
    s = '.' + s;
    int ans = 0;
    {
        for (int i = 1; i <= n; i++)
        {
            if (s[i] == '1' && i != 1 && i != n)
            {
                if (s[i + 1] != '1' && s[i - 1] != '1')
                {
                    ans++;
                    //cout <<i<<" " << "µ¥" << endl;
                    continue;
                }
            }
            else if (s[i] == '0' && s[i + 1] == '0')
            {
                ans += 2;
                //cout <<i<<"  "<<"Ë«" << endl;
                continue;
            }
            ///*  c*/out << ans << endl;
        }
    }
    cout << ans << endl;
}

signed main()
{
    IOS;
    int t; cin >> t; while (t--)
        solve();
}