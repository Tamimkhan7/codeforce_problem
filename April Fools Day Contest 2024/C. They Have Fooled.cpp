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
    if (n == 0 || n == 1)
        cout << 10 << '\n';
    else if (n == 9)
        cout << 0 << '\n';
    else if (n == 2 || n == 4 || n == 12)
        cout << 8 << '\n';
    else if (n == 5 || n == 6 || n == 7 || n == 8)
        cout << 7 << '\n';
    else if (n == 11)
        cout << 6 << '\n';
    else if (n == 3 || n == 10)
        cout << 9 << '\n';
}
