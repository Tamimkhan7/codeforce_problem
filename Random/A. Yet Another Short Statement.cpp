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
ll sum(string s)
{
    ll ans = 0;
    string xp;
    for (int i = 0; i < s.size(); i++)
    {
        xp = s[i];
        ll x = stoi(xp);
        ans += x;
    }
    return ans;
}
void solve()
{
    ll l, r, k, x;
    cin >> l >> r >> k >> x;
    vector<ll> v;
    for (ll i = l; i <= r; i++)
    {
        string s = to_string(i);
        ll ans = sum(s);
        if (ans == x)
        {
            v.push_back(i);
            if (v.size() == k)
            {
                cout << v[k - 1] << '\n';
                return;
            }
        }
    }
    // if (v.size() < k)
    cout << -1 << '\n';
    // else
    // {
    //     // for (int i = 0; i < v.size(); i++)
    //     cout << v[k - 1] << '\n';
    // }
}
int32_t main()
{
    MTK;
    int t;
    cin >> t;
    while (t--)
        solve();
}