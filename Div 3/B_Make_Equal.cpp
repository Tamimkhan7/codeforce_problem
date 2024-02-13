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
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n + 1);
        for (int i = 1; i <= n; i++)
            cin >> v[i];
        sort(all(v));
        
        int mid = (1 + n) / 2;
        int x = v[mid];
        cout << x << '\n';
        auto ap = lower_bound(all(v), x) - v.begin();
        auto xp = upper_bound(all(v), x) - v.begin();
        ll res = 0, res2 = 0;
        for (int i = xp; i <= n; i++)
            res += abs(v[i] - x);
        for (int i = 1; i < ap; i++)
            res2 += abs(x - v[i]);
        cout << res << ' ' << res2 << '\n';
        if (res == res2)
            cout << "YES" << '\n';
        else
            cout << "NO" << '\n';
    }
}