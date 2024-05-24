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
    int n, k;
    cin >> n >> k;
    ll a[n + 1], pre[n + 1];
    pre[0] = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        pre[i] = a[i] + pre[i - 1];
    }
    ll ans = 0;
    for (int l = 1; l <= n; l++)
    {
        if (pre[l] == k)
            ans++;
    }
    for (int l = 1; l <= n; l++)
        cout << pre[l] << ' ';
    cout << '\n';
    map<ll, ll> mp;
    for (int i = 1; i <= n; i++)
    {
        if (mp.find(pre[i] - k) != mp.end())
        {
            ans += mp[pre[i] - k];
        }
        mp[pre[i]]++;
    }
    cout << ans << '\n';
    return 0;
}