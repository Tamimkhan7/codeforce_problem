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
const int N = 1e5 + 9;
int a[N], b[N], n;
ll k;
int cont(int lm)
{
    int l = 1, r = n, ans = 0;
    while (l <= r)
    {
        int mid = (1LL * l + r) / 2;
        if (b[mid] <= lm)
        {
            ans = mid;
            l = mid + 1;
        }
        else
            r = mid - 1;
    }
    return ans;
}
bool f(int x)
{
    ll total_count = 0;
    for (int i = 1; i <= n; i++)
        total_count += cont(x - a[i]);

    return total_count >= k;
}
int32_t main()
{
    MTK;
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    for (int i = 1; i <= n; i++)
        cin >> b[i];

    sort(a + 1, a + n + 1);
    sort(b + 1, b + n + 1);
    ll l = 1, r = 2e9, ans = 0; // total number of search
    while (l <= r)
    {
        int mid = (1LL * l + r) / 2;
        if (f(mid))
        {
            ans = mid;
            r = mid - 1; // find smallest value
        }
        else
            l = mid + 1;
    }
    cout << ans << '\n';
}