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
void solve()
{
    int n;
    cin >> n;
    int a[n + 1];
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    int flag = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j <= n; j++)
        {
            int sum = 0;
            vector<int> v;
            for (int k = i; k <= j; k++)
            {
                sum += a[k];
                v.push_back(k);
                if (sum % 2 == 0)
                    break;
            }
            if (sum % 2 == 0)
            {
                flag = 1;
                cout << v.size() << '\n';
                for (auto x : v)
                    cout << x << ' ';
                cout << '\n';
                return;
            }
        }
    }
    cout << -1 << '\n';
}
int32_t main()
{
    MTK;
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}