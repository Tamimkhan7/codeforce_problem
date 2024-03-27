#include <iostream>
using namespace std;

int reversenumber(int n)
{
    if (n<10)
    {
        cout<<n;
        return 0;
    }
    else
    {
        cout<<n%10;
        reversenumber(n/10);
        return 0;
    }
}

int main ()
{
    int n;
    cin>>n;
    reversenumber(n);
    return 0;
}
