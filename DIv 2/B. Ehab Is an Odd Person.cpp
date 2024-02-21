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
int32_t main()
{
    MTK;
    int n;
    cin >> n;
    vector<int> v, even, odd, ami, tumi;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
        if (x % 2 == 0)
        {
            even.push_back(x);
            ami.push_back(x);
        }
        else
        {
            odd.push_back(x);
            tumi.push_back(x);
        }
    }
    sort(all(even));
    sort(all(odd));
    vector<int> ans;
    int flag = 0;
    while ((!even.empty()) && (!odd.empty()))
    {
        if (even.front() < odd.front())
        {
            ans.push_back(even.front());
            even.erase(even.begin());
        }
        else
        {
            ans.push_back(odd.front());
            odd.erase(odd.begin());
        }
        flag = 1;
    }
    if (flag != 0)
    {
        while (!even.empty())
        {
            ans.push_back(even.front());
            even.erase(even.begin());
        }
        while (!odd.empty())
        {
            ans.push_back(odd.front());
            odd.erase(odd.begin());
        }
        for (auto x : ans)
            cout << x << ' ';
        cout << '\n';
    }
    else
    {
        if (!even.empty())
        {
            for (auto x : ami)
                cout << x << ' ';
            cout << '\n';
        }
        else
        {
            for (auto x : tumi)
                cout << x << ' ';
            cout << '\n';
        }
    }
}