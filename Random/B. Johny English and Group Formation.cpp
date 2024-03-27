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
    deque<int> d;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        d.push_back(x);
    }
    sort(all(d));
    // while (d.size() > 0)
    // {
    //     cout << d.back() << " ";
    // }
    int ans = 0;
    while ((d.front() != d.back()) and d.size() > 0)
    {
        d.pop_front();
        d.pop_back();
        ans++;
    }
    ans += d.size();
    cout << ans << '\n';
}