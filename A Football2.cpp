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
#define pb push_back()
#define pop pop_back()
int32_t main()
{
    MTK;
    int n;
    cin >> n;
    vector<string> s(n);
    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
    }
    sort(s.begin(), s.end());
    int frq[n];
    int maxi = -1, ans = 0;
    string xx;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == s[i + 1])
        {
            ans++;
        }
        else
        {
            if (ans > maxi)
            {
                maxi = ans;
                xx = s[i];
            }
            ans = 0;
        }
    }
    cout << xx << '\n';
}