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
    int a, b, c;
    cin >> a >> b >> c;
    int p = b / 2;

    if (b != 0 and (b + c) > 2 and p <= c)
    {
        int ans = (b + c) / 3;
        if ((b + c) % 3 != 0)
            ans++;
        cout << ans + a << '\n';
        return;
    }

    int ans = c / 3;
    if (c % 3 != 0 and b == 0)
    {
        ans++;
        cout << ans + a << '\n';
        return;
    }
    if (b == 0 and c == 0 || (c + b) % 3 == 0)
    {
        cout << ((c + b) / 3) + a << '\n';
        return;
    }

    cout << -1 << '\n';
}
int32_t main()
{
    MTK;
    int t;
    cin >> t;
    while (t--)
        solve();
}