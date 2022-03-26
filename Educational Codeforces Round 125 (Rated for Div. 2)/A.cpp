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

const int N = 1e6 + 6;

// ˼·�� �����ֻ���������������0��1��2��
// Ϊ 0 ��Ŀ���Ϊ ��0��0��
// Ϊ 1 ��x*x+y*y=c*c c ����ͨ��1~50��ѭ�������ж�
// Ϊ 2 ��������β���������2������(0,0)->��x��0��->(x,y)����Ҳ��������

void solve()
{
    int x, y;
    cin >> x >> y;
    int sum = x * x + y * y;

    if (x == 0 && y == 0)
    {
        cout << 0 << endl;
        return;
    }
    int flag = 0;
    FORU(i, 1, 100)
    {
        if (i * i == sum)
        {
            flag = 1;
            break;
        }
    }
    if (flag)
        cout << 1 << endl;
    else
        cout << 2 << endl;
    return;
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