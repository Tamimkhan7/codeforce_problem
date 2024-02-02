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
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    ll sum = 0, sum2 = 0;
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
            sum += v[i];
        else
            sum2 += v[i];
        if (sum == sum2)
        {
            cout << "YES" << '\n';
            return;
        }
    }
    ll res = sum, res2 = sum2;
    for (int i = 0; i < n; i++)
    {
        if ((sum > sum2) and (i % 2 == 0))
        {
            sum -= v[i];
            sum2 -= v[i + 1];
            if (sum == sum2)
            {
                cout << "YES" << '\n';
                return;
            }
        }
        else if ((sum2 > sum) and (i % 2 != 0))
        {
            sum2 -= v[i];
            sum -= v[i + 1];
            if (sum == sum2)
            {
                cout << "YES" << '\n';
                return;
            }
        }
    }
    reverse(all(v));
    sum = res, sum2 = res2;
    for (int i = 0; i < n; i++)
    {
        if ((sum > sum2) and (i % 2 == 0))
        {
            sum -= v[i];
            sum2 -= v[i + 1];
            if (sum == sum2)
            {
                cout << "YES" << '\n';
                return;
            }
        }
        else if ((sum2 > sum) and (i % 2 != 0))
        {
            sum2 -= v[i];
            sum -= v[i + 1];
            if (sum == sum2)
            {
                cout << "YES" << '\n';
                return;
            }
        }
    }
    // if (sum == sum2)
    // {
    //     cout << "YES" << '\n';
    //     return;
    // }
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