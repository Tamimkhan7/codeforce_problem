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
    int n, r;
    cin >> n >> r;
    r /= 2;
    double ans = (double)(((3.1416) * (r * r)) * n);
    ans *= ans;
    cout << fixed << setprecision(4) << ans << '\n';

    return 0;
}
