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
    int n, x;
    cin >> n;
    deque<string> d;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        d.push_back(s);
        x = s.size();
    }
    if (x % 2 == 0)
    {
        x /= 2;
        x--;
    }
    else
        x /= 2;
}