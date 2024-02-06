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
int32_t main()
{
    MTK;
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<pair<int, string>> v;
        while (n--)
        {
            int x;
            string s;
            cin >> x >> s;
            v.push_back(make_pair(x, s));
        }
        sort(all(v));
        int ans = 0, ans2 = 0;
        int flag = 0, flag2 = 0;
        for (auto [x, y] : v)
        {
            if ((y[0] == '0' and y[1] == '1') and ((flag == 0 and flag2 == 1) || (flag == 0 and flag2 == 0)))
            {
                ans += x;
                flag = 1;
            }
            else if ((y[0] == '1' and y[1] == '0') and ((flag == 1 and flag2 == 0) || (flag == 0 and flag2 == 0)))
            {
                ans += x;
                flag2 = 1;
            }
            else if (y[0] == '1' and y[1] == '1' and ans2 == 0)
            {
                ans2 = x;
            }
            if (flag == 1 and flag2 == 1 and ans2 != 0 || (flag == 1 and flag2 == 1 and ans < x))
                break;
        }
        if (flag == 1 and flag2 == 1 and ans2 != 0)
            cout << min(ans2, ans) << '\n';
        else if (flag == 1 and flag2 == 1)
            cout << ans << '\n';
        else if (ans2 != 0)
            cout << ans2 << '\n';
        else
            cout << -1 << '\n';
    }
}