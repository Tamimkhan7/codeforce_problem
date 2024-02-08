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
    int n, q;
    cin >> n >> q;
    int a[n], px[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    sort(a, a + n, greater<int>());
    px[0] = a[0];
    for (int i = 1; i < n; i++)
        px[i] = px[i - 1] + a[i];

    while (q--)
    {
        ll x;
        cin >> x;
        int ans = -1;
        int l = 0, r = n - 1;
        while (l <= r)
        {
            int mid = (l + r) / 2;
            if (px[mid] >= x)
            {
                ans = mid;
            }
            if (px[mid] > x)
                r = mid - 1;
            else
                l = mid + 1;
        }
        if (ans == -1)
            cout << -1 << '\n';
        else
        {
            int mx = ans;
            mx--;
            if (px[mx] >= x)
            {
                if (mx + 1 == 0)
                    cout << mx + 2 << '\n';
                else
                    cout << mx + 1 << '\n';
            }
            else
                cout << ans + 1 << '\n';
        }
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