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
        ll ans = 0, ans2 = 0;
        vector<ll> v;
        for (int i = 1; i <= n; i++)
        {
            ll x = 1LL * pow(2, i);
            if (x <= n)
            {
                ans += x;
                cout << "1  " << ans << '\n';
                v.push_back(x);
            }
            else
            {
                int flag = 0;
                for (int j = 0; j < v.size(); j++)
                {
                    if (v[j] == i)
                    {
                        flag = 1;
                    }
                }
                if (flag == 0)
                {
                    ans2 += i;
                    cout << "2  " << ans2 << '\n';
                }
            }
        }
        cout << ans2 - (ans + 1) << '\n';
    }
}