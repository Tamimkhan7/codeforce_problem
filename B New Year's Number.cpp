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
    long long int t, m, res, res2;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        res = n / 2021;
        res2 = n / 2020;
        if (res >= res2)
        {
            m = n - (2021 * res);
            if (m == 2021 || m == 2020 || m == 0)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "No" << endl;
            }
        }
        else
        {
            m = n - (2020 * (res2 - 1));
            if (m == 2021 || m == 2020 || m == 0)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "No" << endl;
            }
        }
    }
}