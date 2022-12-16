#include <iostream>
using namespace std;
int main ()
{
    long long int n,i,sum=0, missing;
    int a;
    cin>>n;
    for (i=1; i<n; i++)
    {
        cin>>a;
        sum = sum+a;
    }
     missing = (n*(n+1))/2-sum;
    cout<<missing<<endl;

    return 0;
}
