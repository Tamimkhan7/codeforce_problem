#include <bits/stdc++.h>
using namespace std;
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
#define ordered_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
#define faster                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define sq(x) (x) * (x)
#define PI acos(-1.0)
#define all(x) x.begin(), x.end()
#define nl '\n'
#define mod 1000000007
void solve()
{
    int n, q;
    cin >> n >> q;
    int arr[n];
    while (q--)
    {
        for (int i = 1; i <= n; i++)
        {
            cin >> arr[i];
        }
        int l, r, k, sum = 0;
        cin >> l >> r >> k;
        for (int i = 1; i < l; i++)
        {
            sum += arr[i];
        }
        for (int i = r + 1; i <= n; i++)
        {
            sum += arr[i];
        }
        for (int i = l; i <= r; i++)
        {
            sum += k;
        }
        if (sum % 2 != 0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}
int main()
{
    faster;
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}