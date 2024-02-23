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
    vector<int> a, b;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        a.push_back(x);
        b.push_back(x);
    }
    sort(all(a));
    sort(all(b));
    while (!a.empty() and a.front() == 0)
        a.erase(a.begin());
    while (!b.empty() and b.front() == 0)
        b.erase(b.begin());
    reverse(all(b));
    int cnt = 0, mx = 0;
    int x = a.back();
    while (!a.empty() and a.front() != x)
    {
        cnt++;
        a.erase(a.begin());
    }

    int y = b.back();
    while (!b.empty() and b.front() != y)
    {
        mx++;
        b.erase(b.begin());
    }
    // cout << cnt << ' ' << mx << '\n';
    if (x != 0 and cnt == 0 and mx == 0)
        cout << -1 << '\n';
    else if (cnt != 0 || mx != 0)
        cout << max(cnt, mx) << '\n';
    else
        cout << 0 << '\n';
}
int32_t main()
{
    MTK;
    int t;
    cin >> t;
    while (t--)
        solve();
}