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
    int n;
    cin >> n;
    int a[n + 1], pre[n + 1];
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    sort(a + 1, a + n + 1);
    pre[n + 1] = {0};
    pre[0] = 0;
    for (int i = 1; i <= n; i++)
        pre[i] = pre[i - 1] + a[i];
    vector<int> v;
    for (int i = 1; i <= n; i++)
        v.push_back(pre[i]);
    for (int i = 1; i <= n; i++)
    {
        if (find(all(v), v[i]) != v.end())
        {
            cout << v[i] << '\n';
            return 0;
        }
        else if (find(all(v), v[i + 1] - v[i]) != v.end())
        {
            cout << v[i + 1] - v[i] << '\n';
            return 0;
        }
    }

    return 0;
}