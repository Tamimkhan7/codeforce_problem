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
    int n, k;
    cin >> n >> k;
    string s, ss;
    cin >> s;
    while (k--)
    {
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'B' && s[i + 1] == 'G')
            {
                ss += s[i + 1];
                ss += s[i];
            }
            else if (s[i] == 'G' && s[i + 1] == 'B')
            {
                ss += s[i];
            }
            else
            {
                ss += s[i];
            }
        }
    }
    cout << ss << endl;
}
// bakita pore korbo