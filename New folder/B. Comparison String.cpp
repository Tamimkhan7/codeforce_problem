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
    string s;
    cin >> n >> s;
    int flag = 1, ans = 1;
    for (int i = 0; i < n; i++)
    {
        if (s[i] != s[i - 1])
            flag = 1;
        else
            flag++;
        ans = max(flag, ans);
        // cout << flag << ' ' << ans << "\n";
    }

    cout << ans + 1 << '\n';
}
int32_t main()
{
    MTK;
    int t;
    cin >> t;
    while (t--)
        solve();
}