#include <bits/stdc++.h>
using namespace std;

#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define mem(a, b) memset(a, b, sizeof(a))
#define trace(x) cout << #x << ' ' << x << endl
#define all(x) (x).begin(), (x).end()
#define ll long long
#define mod 1000000007

void solve()
{
    int n;
    cin >> n;
    multiset<int> se;
    multiset<int, greater<int>> v;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        se.insert(x);
        v.insert(x);
    }
    ll sum = accumulate(se.begin(), se.end(), 0LL);
    if (sum % 2 == 0)
    {
        cout << 0 << '\n';
        return;
    }

    ll ans1 = 0, sum1 = sum;
    auto se_copy = se;
    while (true)
    {
        ans1++;
        auto x = se_copy.begin();
        int as = *x / 2;
        int p = *x - as;
        sum1 -= p;
        se_copy.erase(x);
        se_copy.insert(as);
        if (sum1 % 2 == 0)
            break;
    }

    ll ans2 = 0, sum2 = sum;
    auto v_copy = v;
    while (true)
    {
        ans2++;
        auto x = v_copy.begin();
        int as = *x / 2;
        int p = *x - as;
        sum2 -= p;
        v_copy.erase(x);
        v_copy.insert(as);
        if (sum2 % 2 == 0)
            break;
    }

    cout << min(ans1, ans2) << '\n';
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
