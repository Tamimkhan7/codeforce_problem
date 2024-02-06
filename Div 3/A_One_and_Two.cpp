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
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int ans = 1;
    for (int i = 0; i < n; i++)
    {
        ans *= a[i];
        int ans2 = 1;
        for (int j = i + 1; j < n; j++)
            ans2 *= a[j];
        if (ans == ans2)
        {
            // cout << a[i] << '\n';
            cout << i + 1 << '\n';
            return;
        }
    }
    cout << -1 << '\n';
}
int32_t main()
{
    MTK;
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}
