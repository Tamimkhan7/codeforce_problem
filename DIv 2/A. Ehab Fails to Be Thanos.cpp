#include <bits/stdc++.h>
using namespace std;
#define ordered_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
typedef long long int ll;
#define ull unsigned long long int
#define all(x) x.begin(), x.end()
#define mod 1000000007
int32_t main()
{
    MTK;
    int n;
    cin >> n;
    deque<ll> a, b;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        a.push_back(x);
    }
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        b.push_back(x);
    }
    ull sum = accumulate(all(a), 0);
    ull sum2 = accumulate(all(b), 0);
    // cout << sum << ' ' << sum2 << '\n';
    if (sum == sum2)
    {
        int x = a.back();
        a.pop_back();
        b.push_front(x);
        int y = b.back();
        b.pop_back();
        a.push_front(y);
        sum = accumulate(all(a), 0);
        sum2 = accumulate(all(b), 0);
        if (sum == sum2)
            cout << -1 << '\n';
        else
        {
            for (auto x : b)
                cout << x << ' ';
            for (auto x : a)
                cout << x << ' ';
            cout << '\n';
        }
    }
    else
    {
        vector<ll> ans;
        for (auto x : a)
            ans.push_back(x);
        for (auto x : b)
            ans.push_back(x);
        sort(all(ans));
        for (auto x : ans)
            cout << x << ' ';
        cout << '\n';
    }
}