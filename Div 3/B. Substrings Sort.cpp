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
bool com(string &a, string &b)
{
    return a.size() < b.size();
}
void vsorting(vector<string> &v)
{
    sort(v.begin(), v.end(), com);
}
int32_t main()
{
    MTK;
    int n;
    cin >> n;
    vector<string> v;
    string s;
    while (n--)
    {
        cin >> s;
        v.push_back(s);
    }
    vsorting(v);
    string ss, sp;
    for (int i = 0; i < v.size() - 1; i++)
    {
        ss = v[i];
        sp = v[i + 1];
        int cnt = 0;
        int pc = ss.size();
        int k = 0, p = 0;
        for (int j = 0; j < sp.size() && k < pc;)
        {
            if (ss[k] == sp[j])
            {
                // cnt++;
                k++;
                j++;
            }
            else
            {
                p++;
                j = p;
                k = 0;
            }
        }
        // cout << cnt << '\n';
        // cout << ss << ' ' << sp << '\n';
        // if ((ss[0] == sp[0]) and (pc != cnt))
        //     cnt++;
        if ((k != pc))
        {
            cout << "NO" << '\n';
            return 0;
        }
    }
    cout << "YES" << '\n';
    for (auto x : v)
        cout << x << '\n';
}