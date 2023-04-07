#include <bits/stdc++.h>
using namespace std;
#define ordered_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
#define faster                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define mod 1000000007
typedef long long int ll;
typedef unsigned long long int llu;
int main()
{
    faster;
    int t;
    cin >> t;
    string s, p, q;
    int l;
    while (t--)
    {
        cin >> s;
        l = s.size();
        if (l <= 10)
        {
            cout << s << endl;
        }
        else
        {
            int w = l - 2;
            for (int i = 0; i < l; i++)
            {
                p += s[0];
                p += w;
                p += s[l - 1];
            }
            cout << p << endl;
        }
        // cout << p.size() << endl;
    }
}
//***
