#include <bits/stdc++.h>
using namespace std;
int main()
{
 int x, y;
cin >> x >> y;
    int ans = x; int mx = -1e9;
while (y--)
    {
        int z;
        while (cin >> z)
        {
            ans += z;
        }
        mx = max(mx, ans);
        ans = x;
        // tamimkhanami
    }
    cout << mx << '\n';
}