#include <iostream>
using namespace std;
int main ()
{
    long long int n,i,k,m;
    cin>>n;//3
    cout<<n<<endl;
    for (i=1; n!=1; i++)
    {
        if (n%2==0)
        {
            n = n/2;
            cout<<n<<" "<<endl;
        }
       else
        {
            n =(n*3)+1;//10^9
            cout<<n<<" "<<endl;
        }
    }
    return 0;
}
