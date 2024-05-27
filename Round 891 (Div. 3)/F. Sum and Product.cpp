#include <bits/stdc++.h>
using namespace std;
#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define mem(a, b) memset(a, b, sizeof(a))
#define all(x) (x).begin(), (x).end()
#define ll int long long
#define mod 1000000007
const int N = 2e5 + 9;
int a[N], n, x, y, q;
int final_ans;
bool ok(int p)
{
    int ans = 0;
    for (int i = 1; i <= n; i++)
    {
        if (y / a[i] == a[p] and y % a[i] == 0 and x - a[i] == a[p])
            ans++;
    }
    return ans;
}
void solve()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i];

    cin >> q;
    while (q--)
    {
        cin >> x >> y;
        int l = 1, r = 1e9, ans = 0;
        while (l <= r)
        {
            int mid = (1LL * l + r) / 2;
            if (ok(mid))
            {
                ans++;
                r = mid - 1;
            }
            else
                l = mid + 1;
        }

        cout << ans << ' ';
    }
    cout << '\n';
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
