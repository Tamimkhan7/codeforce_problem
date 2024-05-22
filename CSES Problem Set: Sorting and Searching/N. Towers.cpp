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
    multiset<int> se;
    for (int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;
        // for (auto x : se)
        //     cout << x << ' ';
        // cout << '\n';
        auto it = se.upper_bound(x);
        // cout << *it << '\n';
        if (it != se.end())
        {
            se.erase(it);
            se.insert(x);
        }
        else
            se.insert(x);
        // cout << "size= " << se.size() << '\n';
    }
    cout << se.size() << '\n';
    return 0;
}