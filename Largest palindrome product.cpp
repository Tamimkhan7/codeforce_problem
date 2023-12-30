#include <bits/stdc++.h>
using namespace std;
#define ordered_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
#define faster                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define sq(x) (x) * (x)
#define PI acos(-1.0)
#define all(x) x.begin(), x.end()
#define mod 1000000007
typedef long long int ll;
typedef unsigned long long int llu;
#define pb push_back
#define pop pop_back()
#define vc v.clear()
#define sz v.size()
#define lc (n * 2)
#define rc ((n * 2) + 1)
void solve()
{
    int n;
    cin >> n;
    int m = n;
    string s, ss;
    s = to_string(m);
    ss = s;
    reverse(ss.begin(), ss.end());
    if (ss == s)
    {
        cout << s << endl;
        return;
    }
    else
    {
        s.clear();
        ss.clear();
        while (n--)
        {
            s = to_string(n);
            ss = s;
            reverse(ss.begin(), ss.end());
            if (ss == s)
            {
                n = stoi(s);
                for (int i = 100; i <= sqrt(n); i++)
                {
                    for (int j = 100; j <= sqrt(n); j++)
                    {
                        if (i * j == n)
                        {
                            // cout << i << " " << j << " ";
                            cout << n << endl;
                            return;
                        }
                    }
                }
            }
            n = stoi(s);
        }
    }
}
int main()
{
    faster;
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}