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
    int ans = 0, ans2 = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'U')
            ans++;
        else if (s[i] == 'D')
            ans--;
        else if (s[i] == 'R')
            ans2++;
        else
            ans2--;
        if (ans == 1 and ans2 == 1)
        {
            cout << "YES" << '\n';
            return;
        }
    }
    cout << "NO" << '\n';
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