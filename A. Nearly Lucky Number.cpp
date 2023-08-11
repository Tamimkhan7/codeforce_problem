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
#define len(a) sizeof(a)
#define lc (n * 2)
#define rc ((n * 2) + 1)
int main()
{
    faster;
    string s;
    cin >> s;
    ll len = s.size();
    ll c = 0, k = 0, m, p = 0;
    for (ll i = 0; i < len; i++)
    {
        if (s[i] == '4' || s[i] == '7')
        {
            c++;
        }
        else
        {
            k++; 
            m = i;
            for (int j = m; j < len; j++)
            {
                if (s[j] == '4' || s[j] == '7')
                {
                    p++;
                    break;
                }
                continue;
            }
        }
    }
    cout << c << " " << p << endl;
    if (len == 1)
        cout << "NO" << endl;
    else if ((c == len))
        cout << "YES" << endl;
    else if (c != 0 && p == 0)
        cout << "YES" << endl;
    else if (c == 0 && p != 0)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}
