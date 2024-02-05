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
        vector<string> a, b, c;
        for (int i = 0; i < n; i++)
        {
            string s;
            cin >> s;
            a.push_back(s);
        }
        for (int i = 0; i < n; i++)
        {
            string s;
            cin >> s;
            b.push_back(s);
        }
        for (int i = 0; i < n; i++)
        {
            string s;
            cin >> s;
            c.push_back(s);
        }

        int ans1 = 0, ans2 = 0, ans3 = 0;
        for (int i = 0; i < a.size(); i++)
        {
            int flag = 0, flag1 = 0;
            string ss;
            for (int j = 0; j < b.size(); j++)
            {
                if (a[i] == b[j])
                {
                    flag = 1;
                    auto it = find(all(b), b[j]);
                    b.erase(it);
                }
            }
            for (int j = 0; j < c.size(); j++)
            {
                if (a[i] == c[j])
                {
                    flag1 = 1;
                    auto it = find(all(c), c[j]);
                    c.erase(it);
                }
            }
            if (flag != 0 and flag1 == 0)
            {
                ans1 += 1;
                ans2 += 1;
            }
            else if (flag == 0 and flag1 != 0)
            {
                ans1 += 1;
                ans3 += 1;
            }
            else if (flag == 0 and flag1 == 0)
                ans1 += 3;
        }
        for (int i = 0; i < b.size(); i++)
        {
            int flag = 0;
            for (int j = 0; j < c.size(); j++)
            {
                if (b[i] == c[j])
                {
                    flag = 1;
                    auto it = find(all(c), c[j]);
                    c.erase(it);
                }
            }
            if (flag == 1)
            {
                ans2 += 1;
                ans3 += 1;
            }
            else
                ans2 += 3;
        }
        ans3 += (c.size()) * 3;
        cout << ans1 << ' ' << ans2 << ' ' << ans3 << '\n';
    }
}