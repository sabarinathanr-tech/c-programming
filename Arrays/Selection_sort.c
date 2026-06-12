#include <stdio.h>

int main()
{
    int n,min,t;
    scanf("%d",&n);

    int arr[n];

    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);

    for(int i=0;i<n-1;i++)
    {
        min=i;

        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[min])
                min=j;
        }

        t=arr[i];
        arr[i]=arr[min];
        arr[min]=t;
    }

    for(int i=0;i<n;i++)
        printf("%d ",arr[i]);
}
