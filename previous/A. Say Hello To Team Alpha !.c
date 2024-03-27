#include <stdio.h>
#include <string.h>
int main ()
{
char arr[500], arr2[500] = " Enthusiast";
gets(arr);


strcat(arr, arr2);
printf("%s\n", arr);

return 0;
}
