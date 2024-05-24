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

int32_t main()
{
    MTK;
    int n, k;
    cin >> n >> k;
    vector<int> v(n + 1);
    for (int i = 1; i <= n; i++)
        cin >> v[i];
    int ans = -1;
    map<int, int> mp;
    for (int i = 1; i <= n; i++)
    {
        if (mp.find(k - v[i]) != mp.end())
        {
            cout << mp[k - v[i]] << ' ' << i << '\n';
            return 0;
        }
        mp[v[i]] = i;
    }
    cout << ans << '\n';
    return 0;
}