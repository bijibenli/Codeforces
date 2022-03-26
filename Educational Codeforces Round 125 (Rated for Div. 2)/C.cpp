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

//˼·��
//���Է��ֵ���һ���ַ�Ϊ'('ʱ������')'����'('������ƥ�䣬���Կ���ֱ��+2
//����һ���ַ�Ϊ')'��ֻ���ҵ���һ��')'������֮��ض��ǻ��Ĵ���Ҳ��������


const int N = 1e6 + 6;
int a[N];
void solve()
{
    int n;
    cin >> n;

    string s;
    cin >> s;

    int cnt = 0;
    int i = 0;
    for (; i < n - 1; i++)
    {
        if (s[i] == '(')
        {
            i++;
            cnt++;
        }
        else
        {
            int j = i + 1;
            while (j < n && s[j] != ')')
                j++;
            if (j == n)
                break;
            cnt++;
            i = j;
        }
    }

    cout << cnt << " " << n - i << endl;
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