#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    if(n == 0)
    {
        printf("0");
        return 0;
    }

    int arr[32];
    int k = 0;

    while(n)
    {
        arr[k++] = n & 1;
        n >>= 1;
    }

    for(int i = k - 1; i >= 0; i--)
    {
        printf("%d", arr[i]);
    }

    return 0;
}