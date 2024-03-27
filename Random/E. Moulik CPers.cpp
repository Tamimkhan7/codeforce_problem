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
bool cmp(pair<int, string> a, pair<int, string> b)
{
    if (a.first > b.first)
        return true;
    else
        return false;
}
int main()
{
    MTK;
    int t;
    cin >> t;
    cin.ignore();
    for (int i = 1; i <= t; i++)
    {
        cout << "Case " << i << ": " << '\n';
        string s;
        getline(cin, s);
        stringstream ss(s);
        vector<string> vs;
        string word;
        while (ss >> word)
            vs.push_back(word);
        string xp;
        getline(cin, xp);
        stringstream xx(xp);
        vector<int> v;
        while (xx >> word)
        {
            int x = stoi(word);
            v.push_back(x);
        }
        vector<pair<int, string>> ans;
        for (int i = 0; i < v.size(); i++)
        {
            int x = v[i];
            word = vs[i];
            ans.push_back(make_pair(x, word));
        }
        sort(all(ans), cmp);
        for (auto [x, y] : ans)
            cout << x << ' ' << y << '\n';
        string sp;
        cin >> sp;
        for (auto [x, y] : ans)
        {
            if (y == sp)
            {
                cout << x << '\n';
                break;
            }
        }
    }
    return 0;
}
