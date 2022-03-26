#include <iostream>
#include <algorithm>
#include <iomanip>
#include <queue>
#include <stack>
#include <map>
#include <set>
#include <string>
#include <cmath>
#include <vector>
#include <string.h>
#define INF 0x3f3f3f3f
#define PI acos(-1)
#define int long long
#define IOS                      \
    ios::sync_with_stdio(false); \
    cin.tie(0), cout.tie(0)
#define FORU(i, a, b) for (int(i) = (a); (i) <= (b); (i++))
#define FORL(i, a, b) for (int(i) = (b); (i) >= (a); (i--))
using namespace std;

// 简单的模拟+贪心
// 只用判断a[i-1]+x是否<=B 
// 再相加就可以了


const int N = 1e6 + 6;
int a[N];
void solve()
{
    int n, B, x, y;
    cin >> n >> B >> x >> y;
    int sum = 0;
    FORU(i, 1, n)
        a[i] = i;
    FORU(i, 1, n)
    {
        if (a[i - 1] + x <= B)
            a[i] = a[i - 1] + x;
        else
            a[i] = a[i - 1] - y;

        sum += a[i];
    }
    cout << sum << endl;
}

signed main()
{
    IOS;

    int t;
    // cout<<vis[100]<<endl;
    cin >> t;
    while (t--)
    {
        solve();
    }
}