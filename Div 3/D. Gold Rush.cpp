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
    int n, k;
    cin >> n >> k;
    int N = 1e3;
    if (n == k)
    {
        cout << "YES" << '\n';
        return;
    }
    if (n < k || n % 3 != 0)
    {
        cout << "NO" << '\n';
        return;
    }
    while (N--)
    {
        int x = n / 3;
        int y = x * 2;
        cout << x << ' ' << y << '\n';
        if (x == k || y == k)
        {
            cout << "YES" << '\n';
            return;
        }
        else
            n = y;
        if (n % 3 != 0)
        {
            cout << "NO" << '\n';
            return;
        }
    }
    cout << "NO" << '\n';
}
int32_t main()
{
    MTK;
    int t;
    cin >> t;
    while (t--)
        solve();
}