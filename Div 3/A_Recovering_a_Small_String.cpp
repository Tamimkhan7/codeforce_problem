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
        string s;
        int n;
        cin >> n;
        int cnt = 0, flag = 0;
        while (n > 0)
        {
            if (n > 27)
            {
                cnt++;
                char x = 'z';
                s.push_back(x);
                n -= 26;
            }
            else
            {
                if (cnt < 2)
                {
                    cnt++;
                    char x = 'a';
                    s.push_back(x);
                    n -= 1;
                }
                else
                {
                    n--;
                    char x = ('a' + n);
                    s.push_back(x);
                    n = 0;
                }
            }
        }
        // if (flag == 1)
        sort(all(s));
        cout << s << '\n';
    }
}