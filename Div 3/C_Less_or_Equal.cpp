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
int32_t main()
{
    MTK;
    int n, k;
    cin >> n >> k;
    vector<ll> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    sort(all(v));
    if (k == 0)
    {
        ll x = v[0] - 1;
        if (x > 0)
            cout << x << '\n';
        else
            cout << -1 << '\n';
        return 0;
    }
    ll final_ans, ans = 0;
    while (ans <= k)
    {
        ll x = v.front();
        if (x >= 1000000000)
        {
            cout << 1000000000 << '\n';
            return 0;
        }
        v.erase(v.begin());
        final_ans = x;
        ans++;
        int point = 0, flag = 0;
        while ((x == v.front()) and (v.size() > 0))
        {
            ans++;
            v.erase(v.begin());
        }
        if (ans >= k)
            break;
    }
    if (ans > k)
        cout << -1 << '\n';
    else
        cout << final_ans + 1 << '\n';
}