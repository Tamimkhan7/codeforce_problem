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
        vector<int> v, vv;
        for (int i = 1; i <= n; i++)
        {
            v.push_back(i);
            vv.push_back(i);
        }
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
                        v.push_back(j);
                    break;
                }
            }
        }

        int p = n;
        if (v.size() > p)
        {
            for (auto x : v)
            {
                if (p != 0)
                {
                    v.erase(v.begin());
                    p--;
                }
            }
        }
        vector<int> ans;
        int x = v[0];
        ans.push_back(x);
        for (int i = 1; i < v.size(); i++)
        {
            int flag = 0;
            for (int j = ans.size(); j >= 0; j--)
            {
                if (v[i] == ans[j])
                {
                    flag = 1;
                    break;
                }
            }
            if (flag == 0)
                ans.push_back(v[i]);
        }
        for (int i = 1; i <= n; i++)
        {
            int flag = 0;
            for (int j = 0; j < ans.size(); j++)
            {
                if (i == ans[j])
                {
                    flag = 1;
                    break;
                }
            }
            if (flag == 0)
                ans.push_back(i);
        }
        for (auto x : ans)
            cout << x << ' ';
        cout << '\n';
    }
}