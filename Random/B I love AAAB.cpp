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
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int len = s.size();
        int c = 0, k = 0;
        if (s[0] == 'B' || len < 2)
        {
            cout << "NO" << endl;
        }
        else
        {
            for (int i = 0; i < len; i++)
            {
                if (s[i] == 'A')
                {
                    c++;
                }
                else
                {
                    if (c > 0)
                    {
                        if (s[i] == 'B')
                        {
                            k++;
                        }
                        if (c >= k)
                        {
                            // c = 0;
                            // k = 0;
                            continue;
                        }
                        else
                        {
                            break;
                        }
                    }
                    else
                    {
                        break;
                    }
                }
            }
            cout << c << " " << k << endl;
            if (c >= k)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    }
    return 0;
}
