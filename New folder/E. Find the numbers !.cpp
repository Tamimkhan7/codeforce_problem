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
        for (int i = 1; i <= n; i++)
            s += to_string(i);
        vector<string> v;
        int cnt = 0;
        do
        {
            cnt++;
            v.push_back(s);
        } while (next_permutation(all(s)));
        cout << v.size() << ' ';
        string ans = *min_element(all(v));
        cout << ans << '\n';
    }
}