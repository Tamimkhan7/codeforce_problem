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
ll sum;
void solve()
{
    int n, q;
    cin >> n >> q;
    vector<int> v(n + 8), pre(n + 8);
    for (int i = 1; i <= n; i++)
        cin >> v[i];
    sum = accumulate(all(v), 0);
    pre[0] = 0;
    for (int i = 1; i <= n; i++)
        pre[i] = pre[i - 1] + v[i];

    while (q--)
    {
        int l, r, k;
        cin >> l >> r >> k;
        ll ans = pre[r] - pre[l - 1];
        ll res = sum;
        res -= ans;
        ll x = (((r - l) + 1) * k) + res;
        string resslt = (x % 2 == 0) ? "NO" : "YES";
        cout << resslt << '\n';
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