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
        deque<char> d;

        for (auto x : s)
            d.push_back(x);

        // while (d.front() == 'W')
        // {
        //     d.pop_front();
        // }
        // while (d.back() == 'W')
        //     d.pop_back();

        for (auto x : d)
            cout << x << ' ';
        cout << '\n';
        char value = 'B';
        auto it = lower_bound(all(s), value);
        auto it2 = upper_bound(all(s), value);
        // cout << it - s.begin() << '\n';
        cout << it2 - s.begin() << '\n';
        // cout << d.size() << '\n';
    }
}