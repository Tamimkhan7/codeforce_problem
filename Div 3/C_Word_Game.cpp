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
        int m = n;
        n *= 3;
        vector<string> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];
        unordered_map<string, int> mp;
        for (int i = 0; i < n; i++)
        {
            string x;
            cin >> x;
            mp[x]++;
        }
        int x = 0, ac = 0;
        int ans = 0, ans2 = 0, ans3 = 0;
        for (auto s : v)
        {
            x++;
            if (x == m)
            {
                ac++;
                x = 0;
            }
            for (auto [p, q] : mp)
            {
                if (ac == 0)
                {
                    if (p == s)
                    {
                        if (q == 1)
                            ans += 3;
                        else if (q == 2)
                            ans += 1;
                    }
                }
                if (ac == 1)
                {
                    if (p == s)
                    {
                        if (q == 1)
                            ans2 += 3;
                        else if (q == 2)
                            ans2 += 1;
                    }
                }
                if (ac == 2)
                {
                    if (p == s)
                    {
                        if (q == 1)
                            ans3 += 3;
                        else if (q == 2)
                            ans3 += 1;
                    }
                }
            }
        }
        cout << ans << ' ' << ans2 << ' ' << ans3 << '\n';
    }
}