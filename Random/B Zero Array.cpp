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
    deque<ll> v;
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        mp[x]++;
    }
    for (auto [x, y] : mp)
    {
        if (y == 1)
            v.push_back(x);
    }
    sort(all(v), greater<int>());
    while (v.size() > 1)
    {
        ll a = v.front();
        v.pop_front();
        ll b = v.front();
        v.pop_front();
        if (a == b)
            continue;
        else
        {
            a--;
            b--;
            if (b != 0)
                v.push_front(b);
            if (a != 0)
                v.push_front(a);
        }
    }
    // for (auto x : v)
    //     cout << x << ' ';
    // cout << '\n';
    if (v.empty())
        cout << "YES" << '\n';
    else
        cout << "NO" << '\n';
}