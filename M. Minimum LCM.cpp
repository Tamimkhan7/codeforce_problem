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
    int n;
    cin >> n;
    if (n % 2 == 0)
        cout << n / 2 << ' ' << n / 2 << '\n';
    else
    {
        int fl = 0, mx = -1e9 + 7;
        for (int i = 2; i * i <= n; i++)
        {
            if (n % i == 0)
            {
                mx = max(mx, i);
                fl = 1;
            }
        }
        if (!fl)
            cout << 1 << ' ' << n - 1 << '\n';
        else
            cout << mx << ' ' << n - mx << '\n';
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