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

int32_t main()
{
    MTK;
    int t;
    cin >> t;
    while (t--)
    {
        int n, k, x;
        cin >> n >> k >> x;
        int a[n + 1];
        for (int i = 1; i <= n; i++)
            cin >> a[i];
        sort(a + 1, a + n + 1);
        // for (int i = 1; i <= n; i++)
        //     cout << a[i] << ' ';
        // cout << '\n';
        if (x <= 0)
        {
            for (int i = 1; i <= k; i++)
                a[i] += x;
            for (int i = k + 1; i <= n; i++)
            {
                if (a[i] >= 0)
                    a[i] -= x;
            }
        }
        else
        {
            reverse(a + 1, a + n + 1);
            for (int i = 1; i <= k; i++)
                a[i] += x;
            for (int i = k + 1; i <= n; i++)
                a[i] -= x;
        }
        // for (int i = 1; i <= n; i++)
        //     cout << a[i] << ' ';
        // cout << '\n';
        ll ans = 0, maxsub = 0;
        for (int i = 1; i <= n; i++)
        {
            maxsub = max(1LL * a[i], maxsub + a[i]);
            ans = max(ans, maxsub);
        }
        cout << ans << '\n';
    }
}
