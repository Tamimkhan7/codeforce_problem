#include <iostream>
using namespace std;
int main ()
{
    long long int T, X, i, y;
    cin>>T;
    for (i=1; i<=T; i++)
    {
        cin>>X;
        if (X>100)
        {
            y= X-10;

            cout<<y<<endl;
        }
        else
        {
            cout<<X<<endl;
        }

    }

    return 0;
}
