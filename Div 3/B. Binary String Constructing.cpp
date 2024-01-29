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
    int a, b, x;
    cin >> a >> b >> x;
    string s;
    int flag = 0;
    int n = a + b;
    while (a != 0 || b != 0)
    {
        if (b >= a)
        {
            if (b != 0)
            {
                s += '1';
                b--;
            }
            if (a != 0)
            {
                s += '0';
                a--;
            }
        }
        else
        {
            if (a != 0)
            {
                s += '0';
                a--;
            }
            if (b != 0)
            {
                s += '1';
                b--;
            }
        }
    }
    int cnt = 0;
    for (int i = 0; i < n - 1; i++)
    {
        if (s[i] != s[i + 1])
        {
            cnt += 2;
            i++;
        }
    }
    if (cnt == x || (cnt - 1 == x))
        cout << s << '\n';
    else
    {
        string ss = s;
        reverse(all(s));
        
    
    }
}