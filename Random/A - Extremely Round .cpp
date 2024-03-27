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
    int ans = 0;
     for (int i = 1; i <= n; i++)
    {
       
        if (i < 100 and i>9)
            i += 9;
        else if (i < 1000)
            i += 99;
        else if (i < 10000)
            i += 999;
        else if (i < 100000)
            i += 9999;
        else if (i < 1000000)
            i += 99999;
        cout << i << ' ';
        string s = to_string(i);
        int cnt = 0;
        for (int j = 0; j < s.size(); j++)
        {
            if (s[j] > '0')
                cnt++;
            if (cnt > 1)
                break;
        }
        if (cnt == 1)
            ans++;
    }
    cout << ans << '\n';
}
int32_t main()
{
    MTK;
    int t;
    cin >> t;
    while (t--)
        solve();
}