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
    vector<int> v(n), ans;
    for (int i = 0; i < n; i++)
        cin >> v[i];
    sort(all(v));
    while (!v.empty())
    {
        if (v.size() > 1 && v[0] == v[1])
        {
            int flag = 0;
            for (int j = 1; j < v.size() - 1; j++)
            {
                if ((v[j] == v[j + 1]))
                {
                    auto it = find(all(v), v[j + 1]);
                    v.erase(it);
                    flag = 1;
                    break;
                }
            }
            if (flag == 0)
            {
                int x = v.back();
                auto it = find(all(v), x);
                v.erase(it);
            }
            v.erase(v.begin());
        }
        else
        {
            if (v[0] != v[1])
            {
                ans.push_back(v.front());
                v.erase(v.begin());
            }
            else
            {
                ans.push_back(v[v.size() - 1]);
                v.pop_back();
            }
        }

        // for (auto x : v)
        //     cout << x << ' ';
        // cout << '\n';
    }
    cout << ans.size() << '\n';
}

int32_t main()
{
    MTK;
    int t;
    cin >> t;
    while (t--)
        solve();
}
