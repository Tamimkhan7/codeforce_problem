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
    string s, ss;
    cin >> s;
    int n = s.size();
    int ans = 0;
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'a')
            cnt++;
    }
    if (cnt == n)
    {
        for (int i = 0; i < n - 1; i++)
        {
            cout << s[i];
        }
        cout << "z";
        return 0;
    }

    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'a')
        {
            ss += s[i];
            ans = i;
        }
        else
        {
            ans = i;
            break;
        }
    }
    // cout << ss << '\n';
    for (int i = ans; i < n; i++)
    {
        if (s[i] != 'a')
        {
            ss += s[i] - 1;
            ans = i;
        }
        else
        {
            ss += s[i];
            ans = i;
            break;
        }
    }
    for (int i = ans + 1; i < n; i++)
    {
        ss += s[i];
    }
    cout << ss << '\n';
}