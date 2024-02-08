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
    int n, m;
    cin >> n >> m;
    vector<string> v(n);
    string s, ss;
    for (int i = 0; i < n; i++)
        cin >> v[i];
    int mn = 1e5;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            s = v[i];
            ss = v[j];
            int res = 0;
            for (int k = 0; k < m; k++)
            {
                char a = s[k];
                int ans = (int)(a - 'a');
                char b = ss[k];
                int ans2 = (int)(b - 'a');
                res += abs(ans - ans2);
            }
            mn = min(res, mn);
        }
    }
    cout << mn << '\n';
}
int32_t main()
{
    MTK;
    int t;
    cin >> t;
    while (t--)
        solve();
}