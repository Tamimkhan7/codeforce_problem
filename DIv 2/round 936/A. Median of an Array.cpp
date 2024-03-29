#include <bits/stdc++.h>
using namespace std;
#define ordered_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define mem(a, b) memset(a, b, sizeof(a))
#define all(x) x.begin(), x.end()
typedef long long int ll;
#define mod 1000000007
void solve()
{
    int n;
    cin >> n;
    vector<int> v(n + 1);
    for (int i = 1; i <= n; i++)
        cin >> v[i];
    sort(v.begin(), v.end());
    int mid = (1 + n) / 2;
    int x = v[mid];

    int cnt2 = 0;
    for (int i = mid; i <= n; i++)
    {
        if (v[i] == x)
        {
            cnt2++;
        }
    }
    cout << cnt2 << '\n';
}
int32_t main()
{
    MTK;
    int t;
    cin >> t;
    while (t--)
        solve();
}