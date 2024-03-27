#include <iostream>
using namespace std;

int display(int N)
{
    if (N==0)
    {

        //cout<<n<<" ";
        return 0;
    }
    else
    {

        cout<<N<<" ";

        display(N-1);

    }
     cout<<endl;
}

int main ()
{
    int N;
    cin>>N;
    display(N);

    return 0;
}
