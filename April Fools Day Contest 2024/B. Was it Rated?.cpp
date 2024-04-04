#include <bits/stdc++.h>
using namespace std;

#define Faster                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

int main()
{
    Faster;
    int n;
    cin >> n;
    if (n == 15 || n == 20 || n == 21)
        cout << "NO" << '\n';
    else
        cout << "YES" << '\n';
    return 0;
}
