#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int n;
    cin>>n;
    for (int i=1; i<=n; i++)
    {
        int k;
        cin>>k;
        for (int j=1; j<=k; j++)
        {
            int p[k];
            cin>>p[j];
            if (p[j] == '0')
            {
                cout<<'+';
            }
            else if (p[j] == '1')
            {
                cout<<'-';
            }
        }
    }





    return 0;
}
