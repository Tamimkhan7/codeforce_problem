#include <bits/stdc++.h>
#include <cstring>
#include <string.h>
using namespace std;
int main ()
{
    char arr[10000];
    gets(arr);
    int len = strlen(arr);
    for (int i=0; arr[i] != '\0'; i++)
    {
        if (i == 0)
        {
            arr[i] = toupper(arr[i]);
        }
        else if (arr[i-1] == ' ')
        {
            arr[i]= toupper(arr[i]);
        }
    }
    cout<<arr<<endl;


    return 0;
}
