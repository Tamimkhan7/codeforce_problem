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
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        sort(a, a + n);
        for (int i = 0; i < n - 1; i++)
        {
            if (a[i] < 0 and a[i + 1] < 0)
            {
                a[i] = -a[i];
                a[i + 1] = -a[i + 1];
            }
            else if (a[i] < 0 and a[i + 1] >= 0)
            {
                int x = -a[i];
                if (x > a[i + 1])
                {
                    a[i] = x;
                    a[i + 1] = -a[i + 1];
                }
            }
            else if (a[i] >= 0 and a[i + 1] < 0)
            {
                int x = -a[i + 1];
                if (x > a[i])
                {
                    a[i + 1] = x;
                    a[i] = -a[i];
                }
            }
        }
        ll ans = 0;
        for (auto x : a)
            ans += x;
        cout << ans << '\n';
    }
}