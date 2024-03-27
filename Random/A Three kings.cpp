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
    int a, b, c, x, y, z;
    cin >> a >> b >> c >> x >> y >> z;
    int ans = a * x;
    int ans2 = b * y;
    int ans3 = c * z;
    int mx = max(ans, max(ans2, ans3));
    vector<string> v;
    if (mx == ans)
        v.push_back("Barley");
    if (mx == ans2)
        v.push_back("Hops");
    if (mx == ans3)
        v.push_back("Malt");
    for (auto x : v)
        cout << x << ' ';
    cout << '\n';
}