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
    string s, ss;
    set<string> v;
    vector<string> v1;
    cin >> s;
    int c = 0;
    int len = s.size();
    for (int i = 0; i < len; i++)
    {
        ss = s[i];
        v.insert(ss);
    }
    int n = v.size();
    for (auto i : v)
    {
        v1.push_back(i);
    }
    for (int i = 0; i < n; i++)
    {
        cout << v1[i] << " ";
    }
    // if (c == 3)
    //     cout << "YES" << endl;
    // else
    //     cout << "NO" << endl;
    return 0;
}