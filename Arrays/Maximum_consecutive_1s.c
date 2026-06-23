#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);

    int arr[n];

    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);

    int cnt=0,max=0;

    for(int i=0;i<n;i++)
    {
        if(arr[i]==1)
        {
            cnt++;

            if(cnt>max)
                max=cnt;
        }
        else
        {
            cnt=0;
        }
    }

    printf("%d",max);
}