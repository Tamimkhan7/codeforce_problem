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
    // for(int i=1; i<=n; i++)cout<<v[i]<<' ';
    // cout << '\n';
    int l = 1, r = n;
    while (l <= r)
    {
        int sum1 = 0, sum2 = 0;
        int mid = (l + r) / 2;
        for (int i = 1; i < mid; i++)
            sum1 += v[i];
        for (int i = mid + 1; i <= n; i++)
            sum2 += v[i];
        if (sum1 == sum2)
        {
            cout << "YES" << '\n';
            return;
        }
        if (sum1 > sum2)
            r = mid - 1;
        else
            l = mid + 1;
    }
    cout << "NO" << '\n';
}
int32_t main()
{
    MTK;
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}