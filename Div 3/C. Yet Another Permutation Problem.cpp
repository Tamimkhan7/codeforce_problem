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
        vector<int> v = {};
        for (int i = 1; i <= n; i++)
            v.push_back(i);
        for (int i = n; i >= 2; i--)
        {
            for (int j = i - 1; j >= 2; j--)
            {
                if (i % j == 0)
                {
                    auto it = find(all(v), i);
                    auto it2 = find(all(v), j);
                    if (it != v.end())
                        v.push_back(i);
                    if (it2 != v.end())
                    {
                        v.push_back(j);
                    }
                    break;
                }
            }
        }
        for (auto x : v)
            cout << x << ' ';
        cout << '\n';
    }
}