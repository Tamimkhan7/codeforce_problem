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

int32_t main()
{
    MTK;
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    ll maxsum = 0, ans = LLONG_MIN;
    for (int i = 1; i <= n; i++)
    {
        maxsum = max(1LL * a[i], a[i] + maxsum);
        ans = max(ans, maxsum);
    }

    cout << ans << '\n';
    return 0;
}