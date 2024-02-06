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
    vector<char> a, b, c;
    int ans = 0, ac = 0;
    for (auto x : s)
    {
        int flag = 0;
        if (ans == 0)
        {
            for (int i = 0; i < a.size(); i++)
            {
                if (a[i] == x)
                    flag = 1;
            }
            if (flag == 0)
                a.push_back(x);
            else
            {
                b.push_back(x);
                ans = 1;
            }
        }
        else
        {
            for (int i = 0; i < b.size(); i++)
            {
                if (b[i] == x)
                    flag = 1;
            }
            if (flag == 0)
                b.push_back(x);
        }
    }
    cout << a.size() + b.size() << '\n';
}
int32_t main()
{
    MTK;
    int t;
    cin >> t;
    while (t--)
        solve();
}
