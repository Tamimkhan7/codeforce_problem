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

bool check(string a, string b)
{
    reverse(all(a));
    if (a == b)
        return true;
    else
        return false;
}

void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> v(n + 1);
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
        sum += v[i];
    }
    if (sum < k)
    {
        cout << -1 << '\n';
        return;
    }
}

int32_t main()
{
    MTK;
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
