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
    vector<int> v, ans, pre(n);
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
            ans.push_back(v[i]);
        else
            ans.push_back(-v[i]);
    }

    pre[0] = ans[0];
    for (int i = 1; i < n; i++)
        pre[i] = pre[i - 1] + ans[i];
    for (auto x : pre)
        cout << x << ' ';
    cout << '\n';
    // for (int i = 1; i <= n; i++)
    //     cout << pre[i] << ' ';
    // cout << '\n';
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

/*// for (int i = 0; i < n; i++)
    // {
    //     int sum = 0, sum2 = 0;
    //     for (int j = i; j < n; j++)
    //     {
    //         if (j % 2 == 0)
    //             sum += v[j];
    //         else
    //             sum2 += v[j];
    //         if (sum == sum2)
    //         {
    //             cout << "YES" << '\n';
    //             return;
    //         }
    //     }
    // }
    // cout << "NO" << '\n';
}*/