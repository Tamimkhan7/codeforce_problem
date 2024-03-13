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
    string sp = "map", xp = "pie";
    int n;
    string s;
    cin >> n >> s;
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'm')
        {
            if (s[i + 1] == 'a' and s[i + 2] == 'p')
            {
                cnt++;
                i += 2;
            }
        }
        else if (s[i] == 'p')
        {
            if (s[i + 1] == 'i' and s[i + 2] == 'e')
            {
                cnt++;
                i += 2;
            }
        }
    }
    cout << cnt << '\n';
}
int32_t main()
{
    MTK;
    int t;
    cin >> t;
    while (t--)
        solve();
}