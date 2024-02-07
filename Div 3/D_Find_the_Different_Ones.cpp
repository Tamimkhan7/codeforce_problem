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
    vector<int> v(n + 1);
    for (int i = 1; i <= n; i++)
        cin >> v[i];
    int q;
    cin >> q;
    while (q--)
    {
        int l, r;
        cin >> l >> r;
        int fl = 0;
        vector<int> xp;
        for (int i = l; i <= r; i++)
        {
            xp.push_back(v[i]);
        }
        int mx = *max_element(all(xp));
        int mn = *min_element(all(xp));
        cout << mx << ' ' << mn << '\n';
        if (mx != mn)
        {
            int fl = 0, cf = 0;
            string s;
            for (int i = l; i <= r; i++)
            {
                if (v[i] == mx)
                {
                    s += to_string(i);
                    fl = 1;
                }
                else if (v[i] == mn)
                {
                    s += to_string(i);
                    cf = 1;
                }
                if (fl == 1 and cf == 1)
                    break;
            }
            cout << s[0] << ' ' << s[1] << '\n';
        }
        else
            cout << -1 << ' ' << -1 << '\n';
    }
    cout << '\n';
}
int32_t main()
{
    MTK;
    int t;
    cin >> t;
    while (t--)
        solve();
}