#include <stdio.h>

int main()
{
    int n;
    scanf("%d", & n);

    int arr[n];

    for (int i = 0; i < n; i++)
        scanf("%d", & arr[i]);

    int k, maxsize = 0;
    scanf("%d", & k);

    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            int sum = 0;

            for (int m = i; m <= j; m++)
                sum += arr[m];

            if (sum == k)
            {
                int len = j - i + 1;

                if (len > maxsize)
                    maxsize = len;
            }
        }
    }

    printf("%d", maxsize);
}