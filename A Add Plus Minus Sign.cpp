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
    while (t--)
    {
        int n;
        cin >> n;
        string s, k;
        cin >> s;
        int sum = 0;
        k = s[0];
        sum += stoi(k);
        for (int i = 1; i < n; i++)
        {
            k = s[i];
            sum += stoi(k);
            if (sum > 1)
            {
                sum -= s[i];
                cout << "-";
            }
            else
            {
                cout << "+";
            }
        }
        cout << endl;
    }
}
