#include<iostream>

using namespace std;
int main()
{
    long long int i,n,sum=0,missing;
    cin>>n;//10
    int arr[n];//arr[n]
    for(i=0; i<n-1; i++)
    {
        cin>>arr[i];//1 2 3 4 5 6 7 8 9
        sum=sum+arr[i];//1 2 3 4 5 6 7 8 9
    }
    missing = (n*(n+1))/2 - sum;////(10*(10+1))/2-1
    cout<<missing;
   return 0;
}
