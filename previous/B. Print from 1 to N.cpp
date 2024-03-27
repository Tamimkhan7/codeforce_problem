#include <iostream>
using namespace std;

int printrecursion(int N)
{
    if (N==1)
    {
        cout<<1<<endl;
    }
    else
    {

        printrecursion(N-1);
        cout<<N<<endl;
        return 0;

    }
}

int main ()
{
    int N;
    cin>>N;
    printrecursion(N);

    return 0;
}
