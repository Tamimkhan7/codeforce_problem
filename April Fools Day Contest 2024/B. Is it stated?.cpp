#include <bits/stdc++.h>
using namespace std;

#define Faster                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

int main()
{
    Faster;
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        if (s.find("it") != -1)
            cout << "YES" << '\n';
        else
            cout << "NO" << '\n';
    }
    return 0;
}
