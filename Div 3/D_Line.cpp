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
int32_t main()
{
    MTK;
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int x = n / 2, ab = 0;
        for (int i = 0; i < n; i++)
        {
            ab++;
            int flag = 0, cnt = 0;
            for (int k = i; k < n; k++)
            {
                if (k < x and (s[k] == 'L') and (cnt < ab))
                {
                    s[k] = 'R';
                    cnt++;
                }
                else if (k > x and (s[k] == 'R') and (cnt < ab))
                {
                    s[k] = 'L';
                    cnt++;
                }
            }
            int ans = 0;
            cout << s << '\n';
            for (int j = 0; j < n; j++)
            {
                if (s[j] == 'R')
                    ans += (n - (j + 1));
                else
                    ans += j;
            }
            // cout << ans << ' ';
        }
        cout << '\n';
    }
}