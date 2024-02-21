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
    int ans = 0;
    vector<int> v;

    int ac = 0, flag = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'A')
        {
            ac = i;
            break;
        }
    }
    if (ans < 2)
        cout << 0 << '\n';
    else
        cout << n - (ac + 1) << '\n';
}
int32_t main()
{
    MTK;
    int t;
    cin >> t;
    while (t--)
        solve();
}
