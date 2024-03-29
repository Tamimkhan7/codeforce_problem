#include <bits/stdc++.h>
using namespace std;
#define ordered_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define mem(a, b) memset(a, b, sizeof(a))
#define all(x) x.begin(), x.end()
typedef long long int ll;
#define mod 1000000007
void solve()
{
    int n, k;
    cin >> n >> k;
    vector<ll> v(n + 1), pre(n + 1);
    for (int i = 1; i <= n; i++)
        cin >> v[i];
    pre[0] = 0;
    for (int i = 1; i <= n; i++)
        pre[i] = v[i] + pre[i - 1];
    // Kadane’s Algorithm, should be use another problem, be concerned
    ll currentSum = 0, maxSum = -2e9 + 7;
    for (int i = 1; i <= n; i++)
    {
        currentSum = max(v[i], currentSum + v[i]);
        // cout << currentSum << ' ';
        maxSum = max(maxSum, currentSum);
        // cout << maxSum << '\n';
    }

    ll mx = *max_element(all(pre));
    mx = max(mx, maxSum);
    while (k--)
    {
        v.push_back(mx);
        v.resize(v.size());
        mx = (mx * 2) % mod;
    }
    ll ans = accumulate(all(v), 0 * 1LL);
    ans %= mod;
    if (ans < 0)
        ans = (mod + ans) % mod;
    cout << ans << '\n';
}
int32_t main()
{
    MTK;
    int t;
    cin >> t;
    while (t--)
        solve();
}