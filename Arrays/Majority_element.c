//Element occuring N/2 times

#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int a[n];

    for(int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    int candidate = 0;
    int count = 0;

    for(int i = 0; i < n; i++)
    {
        if(count == 0)
            candidate = a[i];

        if(a[i] == candidate)
            count++;
        else
            count--;
    }

    printf("%d", candidate);

    return 0;
}
