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
    int n = 1;
    while (n < 9)
    {
        string s;
        cin >> s;
        int flag = 0, store, up, dw;
        for (int i = 0; i < 8; i++)
        {
            if (s[i] == '#')
            {
                flag++;
                store = i;
            }
        }
        
        if (flag == 1)
        {
            cout << n << ' ' << store + 1 << '\n';
            return;
        }
    }
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