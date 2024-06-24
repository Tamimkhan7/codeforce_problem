#include <bits/stdc++.h>
using namespace std;
#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define all(x) (x).begin(), (x).end()
#define ll long long
#define mod 1000000007

int main()
{
    MTK;
    int x;
    vector<int> v;
    while (cin >> x)
        v.push_back(x);
    sort(all(v));
    // for (auto x : v)
    //     cout << x << ' ';
    // cout << '\n';

    for (int i = 0; i < v.size() - 2; ++i)
    {
        if (v[i] + v[i + 1] > v[i + 2])
        {
            cout << "TRIANGLE" << '\n';
            return 0;
        }
    }

    for (int i = 0; i < v.size() - 1; ++i)
    {
        if (v[i] + v[i + 1] == v[i + 2])
        {
            cout << "SEGMENT" << '\n';
            return 0;
        }
    }

    cout << "IMPOSSIBLE" << '\n';
    return 0;
}
