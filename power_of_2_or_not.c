#include <stdio.h>

int main()
{
    int n, val = 1;

    scanf("%d",&n);

    while(val < n)
        val = val * 2;

    if(val == n)
        printf("It is power of 2");
    else
        printf("It is not power of 2");

    return 0;
}
