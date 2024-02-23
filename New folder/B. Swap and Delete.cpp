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

    string s, ss;
    cin >> s;
    ss = s;
    int zero = count(all(s), '0');
    int one = count(all(s), '1');
    // cout << zero << ' ' << one << '\n';
    int cnt = abs(zero - one);
    int ans = cnt;
    if (zero > one)
    {
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '0')
            {
                s.erase(s.begin() + i);
                // cout << s << ' ';
                cnt--;
                // i = 0;
            }
        }
    }
    else if (one > zero)
    {
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '1')
            {
                s.erase(s.begin() + i);
                cnt--;
                // i = 0;
            }
        }
    }
    cout << s << '\n';
}
int32_t main()
{
    MTK;
    int t;
    cin >> t;
    while (t--)
        solve();
}