// bakita pore korbo
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
    string s, ss;
    cin >> s >> s;
    int len = s.size();
    for (int i = 0; i < len; i++)
    {
        s = tolower(ss);
        ss = tolower(ss);
        sort(s.begin(), s.end());
        sort(ss.begin(), ss.end());
    }
}