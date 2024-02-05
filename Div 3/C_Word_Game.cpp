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
            string s, ss, sss;
            cin >> s >> ss >> sss;
            a.push_back(s);
            b.push_back(ss);
            c.push_back(sss);
        }
        sort(all(a));
        sort(all(b));
        sort(all(c));
        int ans1 = 0, ans2 = 0, ans3 = 0;
    }
}