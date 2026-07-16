#include <stdio.h>

int main()
{
    int r, c;
    scanf("%d%d", & r, & c);

    int a[r][c];

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", & a[i][j]);
        }
    }

    for (int r1 = 0; r1 < r; r1++)
    {
        for (int c1 = 0; c1 < c; c1++)
        {
            for (int r2 = r1; r2 < r; r2++)
            {
                for (int c2 = c1; c2 < c; c2++)
                {
                    for (int i = r1; i <= r2; i++)
                    {
                        for (int j = c1; j <= c2; j++)
                        {
                            printf("%d ", a[i][j]);
                        }
                        printf("\n");
                    }
                }
            }
        }
    }
    return 0;
}