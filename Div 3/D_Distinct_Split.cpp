#include <bits/stdc++.h>
using namespace std;
#define ordered_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
typedef long long int ll;
#define all(x) x.begin(), x.end()
#define mod 1000000007
void solve()
{
    int n;
    string s;
    cin >> n >> s;
    vector<char> a, b;
    int ans = 0;
    for (auto x : s)
    {
        int flag = 0;
        if (ans == 0)
        {
            for (int i = a.size() - 1; i >= 0; i--)
            {
                if (a[i] == x)
                    flag = 1;
            }
            if (flag == 0)
                a.push_back(x);
            else
                ans++;
        }
        cout << a.size() << '\n';
        for (int i = b.size() - 1; i >= 0; i--)
        {
            if (b[i] == x)
                flag = 1;
        }
        if (flag == 0)
            b.push_back(x);
        else
        {
            cout << x << '\n';
            cout << b.size() << '\n';
            return;
        }
    }
    cout << a.size() << ' ' << b.size() << '\n';
}
int32_t main()
{
    MTK;
    int t;
    cin >> t;
    while (t--)
        solve();
}
