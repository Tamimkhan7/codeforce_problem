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
        string s;
        cin >> n >> s;
        int point = -1;
        for (int i = 0; i < n; i++)
        {
            char x = s[i];
            char p = (s[i - 1]);
            if (p >= 'a' and p <= 'z')
                point = -1;
            else
            {
                if (p == '0')
                    point = 1;
                else
                    point = 0;
            }
            cout << "point " << point << '\n';
            for (int j = 0; j < n; j++)
            {
                if (x == s[j] and (x >= 'a' and x <= 'z'))
                {
                    if (point == 1)
                    {
                        cout << s[j] << ' ';
                        s[j] = '0';
                        cout << s[j] << '\n';
                    }
                    else if (point == -1 || point == 0)
                    {
                        cout << s[j] << ' ';
                        s[j] = '1';
                        cout << s[j] << '\n';
                    }
                }
            }
        }
        for (char x : s)
            cout << x << ' ';
        cout << '\n';
    }
}