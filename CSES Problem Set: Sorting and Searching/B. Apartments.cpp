#include <bits/stdc++.h>
using namespace std;
#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define mem(a, b) memset(a, b, sizeof(a))
#define trace(x) cout << #x << ' ' << x << endl
#define all(x) (x).begin(), (x).end()
#define ll int long long
#define mod 1000000007
const int N = 2e5 + 9;
int a[N], b[N];
int n, m, k;
bool ok(int x)
{
    int ans = 0;
    for (int i = 1; i <= n; i++)
    {
        if (a[i] + x <=)
    }
    return ans >= x;
}
int32_t main()
{
    MTK;
    cin >> n >> m >> k;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    sort(a + 1, a + n + 1);
    for (int i = 1; i <= m; i++)
        cin >> b[i];
    sort(b + 1, b + n + 1);
    int l = 1, r = m;
    int ans = 0;
    while (l <= r)
    {
        int mid = (l + r) / 2;
        if (ok(mid))
        {
            ans = mid;
            l++;
        }
        else
            r--;
    }
    cout << ans << '\n';
    return 0;
}