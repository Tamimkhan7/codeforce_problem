#include <bits/stdc++.h>
using namespace std;
#define ordered_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
typedef long long int ll;
#define all(x) x.begin(), x.end()
#define mod 1000000007
void solve()
{
    char a[9][9];
    for (int i = 1; i <= 8; i++)
    {
        for (int j = 1; j <= 8; j++)
            cin >> a[i][j];
    }
    // for (int i = 1; i <= 8; i++)
    // {
    //     for (int j = 1; j <= 8; j++)
    //     {
    //         cout << a[i][j] << ' ';
    //     }
    //     cout << '\n';
    // }
    // cout << '\n';
    for (int i = 1; i <= 8; i++)
    {
        for (int j = 1; j <= 8; j++)
        {
            if (a[i][j] == '#' and a[i - 1][j - 1] == '#' and a[i - 1][j + 1] == '#' and a[i + 1][j - 1] == '#' and a[i + 1][j + 1] == '#')
            {
                cout << i << ' ' << j << '\n';
                return;
            }
        }
    }
}
int32_t main()
{
    MTK;
    int t;
    cin >> t;
    while (t--)
        solve();
}