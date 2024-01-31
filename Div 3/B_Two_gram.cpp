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
    int n;
    cin >> n;
    string s;
    cin >> s;
    vector<string> v;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            string ss;
            for (int k = i; k <= j; k++)
            {
                ss += s[k];
            }
            if (ss.size() == 2)
            {
                v.push_back(ss);
            }
        }
    }
   
    string ans;
    int mx = -1e5;
    for (int i = 0; i < v.size(); i++)
    {
        int cnt = 0;
        for (int k = 0; k < v.size(); k++)
        {
            if (v[i] == v[k])
            {
                cnt++;
            }
        }
        if (cnt > mx)
        {
            ans = v[i];
            mx = cnt;
        }
    }
    cout << ans << '\n';
}