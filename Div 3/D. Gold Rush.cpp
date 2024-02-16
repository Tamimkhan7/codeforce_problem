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
int N = 1e4;
void solve()
{
    int n, m;
    cin >> n >> m;
    if ((m == n))
    {
        cout << "YES" << '\n';
        return;
    }
    ll mx, mn;
    while (N--)
    {
        if (n % 3 != 0)
        {
            cout << "NO" << '\n';
            return;
        }
        mn = n / 3;
        mx = mn * 2;
        // cout << mx << ' ' << mn << '\n';
        if ((mx / 3 == m and mx % 3 == 0) || (mn / 3 == m and mn % 3 == 0) || (mn == m) || (mx == m))
        {
            cout << "YES" << '\n';
            return;
        }
        n = mx;
    }
}
// using dfs stap for that the problem
int32_t main()
{
    MTK;
    int t;
    cin >> t;
    while (t--)
        solve();
}