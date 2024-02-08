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
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    for (int i = 0; i < n; i++)
    {
        int mn = 1e9 + 7;
        for (int j = i + 1; j < n; j++)
        {
            if ((v[i] + v[j]) % 2)
            {
                mn = min(v[j], mn);
            }
        }
        if ((mn != 1e9 + 7) and (mn < v[i]))
        {
            cout << mn << ' ' << v[i] << '\n';
            swap(mn, v[i]);
        }
    }
    for (auto x : v)
        cout << x << ' ';
    cout << '\n';
}