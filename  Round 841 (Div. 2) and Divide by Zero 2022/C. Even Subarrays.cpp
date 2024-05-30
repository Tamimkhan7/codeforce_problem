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
int a[N], n, pre[N];
bool ok(int x)
{
    int cnt = 0;
    for (int i = 1; i <= x; i++)
    {
        if (x % i == 0)
            cnt++;
    }
    if (cnt % 2)
        return false;
    else
        return true;
}

int findxor(vector<int> &v)
{
    int ans = 0;
    for (int i = 0; i < v.size(); i++)
        ans ^= v[i];
    // cout << ans << '\n';
    return ans;
}
void solve()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        pre[i] = pre[i - 1] ^ a[i];
    }
    int res = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j <= n; j++)
        {
            vector<int> v;
            for (int k = i; k <= j; k++)
                v.push_back(a[k]);
            int ans = findxor(v);
            if (ok(ans))
            {
                res++;
                // for (auto x : v)
                //     cout << x << ' ';
                // cout << '\n';
            }
        }
    }
    cout << res << '\n';
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
