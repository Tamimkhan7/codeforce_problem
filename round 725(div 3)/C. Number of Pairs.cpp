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
int a[N];

int32_t main()
{
    MTK;
    int t;
    cin >> t;
    while (t--)
    {
        int n, l, r;
        cin >> n >> l >> r;
        for (int i = 0; i < n; i++)
            cin >> a[i];

        sort(a, a + n);

        ll ans = 0;
        for (int i = 0; i < n; i++)
            cout << a[i] << ' ';
        cout << '\n';
        for (int i = 0; i < n; i++)
        {
            cout << i << ' ' << a[i] << '\n';
            int left = lower_bound(a + i + 1, a + n, l - a[i]) - (a + i + 1);      // lower_bound(a + i + 1, a + n, l - a[i]) finds the first element in the subarray a[i+1] to a[n-1] that is not less than l - a[i].
            int right = upper_bound(a + i + 1, a + n, r - a[i]) - (a + i + 1) - 1; // upper_bound(a + i + 1, a + n, r - a[i]) finds the first element in the subarray a[i+1] to a[n-1] that is greater than r - a[i].

            if (left <= right)
            {
                ans += (right - left + 1);
            }
        }

        cout << ans << '\n';
    }
    return 0;
}
