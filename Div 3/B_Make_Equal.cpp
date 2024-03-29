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
    vector<int> v(n + 8);
    ll sum = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
        sum += v[i];
    }
    ll x = (1LL * sum / n);
    ll cnt = 0;
    for (int i = 1; i <= n; i++)
    {
        if (cnt < 0)
        {
            cout << "NO" << '\n';
            return;
        }
        if (v[i] > x)
            cnt += (v[i] - x);
        else
            cnt -= (x - v[i]);
    }
    if (cnt < 0)
        cout << "NO" << '\n';
    else
        cout << "YES" << '\n';
}
int32_t main()
{
    MTK;
    int t;
    cin >> t;
    while (t--)
        solve();
}