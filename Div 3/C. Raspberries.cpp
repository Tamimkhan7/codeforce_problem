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
    vector<int> v(n), vv(n);
    ll ans = 1;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        ans *= v[i];
        vv[i] = v[i];
    }
    if (ans % k == 0)
    {
        cout << 0 << '\n';
        return;
    }
    int res = 100;
    for (int i = 0; i < n; i++)
    {
        int mn = v[i], x = 1;
        ll ami = ans;
        while (x <= k)
        {
            ami /= mn;
            mn++;
            ami *= mn;
            if (ami % k == 0)
            {
                res = min(x, res);
                break;
            }
            x++;
        }
    }
    int cnt = 0;
    ll ami = ans;

    int x = 5000;
    while (x--)
    {
        cnt++;
        int mn = *min_element(all(v));
        ami /= mn;
        auto it = find(all(v), mn);
        v.erase(it);
        mn++;
        v.push_back(mn);
        ami *= mn;
        if (ami % k == 0)
            break;
    }
    sort(all(vv));
    ami = ans;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        ami /= vv[i];
        count++;
        vv[i]++;
        ami *= vv[i];
        if (ami % k == 0)
            break;
    }
    cout << min(cnt, min(res, count)) << '\n';
}

int32_t main()
{
    MTK;
    int t;
    cin >> t;
    while (t--)
        solve();
}