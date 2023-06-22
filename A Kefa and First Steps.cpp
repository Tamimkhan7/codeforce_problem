#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int c = 0, k = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] <= arr[i + 1])
        {
            c++;
        }
        else
        {
            if (k < c)
            {
                k = c;
                c = 0;
            }
            continue;
        }
    }
    if (c == n || c > k)
        cout << c << endl;
    else
        cout << k + 1 << endl;
}
