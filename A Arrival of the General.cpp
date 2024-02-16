#include <bits/stdc++.h>
using namespace std;
#define ordered_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
typedef long long int ll;
#define mod 1000000007
int32_t main()
{
    MTK;
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    int mx = *max_element(all(v));
    int mn = *min_element(all(v));
    int mx_element = -1, mn_element;
    for (int i = 0; i < n; i++)
    {
        if (v[i] == mx and mx_element == -1)
            mx_element = i;
        else if (v[i] == mn)
            mn_element = i;
    }
    int ans = (mx_element + ((n - 1) - (mn_element)));
    if (mx_element > mn_element)
        ans--;
    cout << ans << '\n';
}