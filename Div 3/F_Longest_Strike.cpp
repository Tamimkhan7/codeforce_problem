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
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    sort(a, a + n);
    int cnt = 1, l, r, ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (v[i] == v[i + 1])
        {
            cnt++;
        }
        else
        {
            if (cnt >= k)
            {
                if (ans == 0)
                    l = v[i];
                ans++;
                continue;
            }
            else
            {
                r = v[i - 1];
                cnt = 1;
                i--;
            }
        }
    }
    cout << l << ' ' << r << '\n';
}
int32_t main()
{
    MTK;
    int t;
    cin >> t;
    while (t--)
        solve();
}