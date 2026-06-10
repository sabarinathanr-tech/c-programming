#include <stdio.h>

int main()
{
    int r,c;
    scanf("%d%d",&r,&c);

    int arr[r][c];

    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
    }

    int k;
    scanf("%d",&k);

    int sum=0;

    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(arr[i][j]==k){

                if(i-1>=0) sum+=arr[i-1][j];
                if(i+1<r) sum+=arr[i+1][j];
                if(j-1>=0) sum+=arr[i][j-1];
                if(j+1<c) sum+=arr[i][j+1];

            }
        }
    }

    printf("%d",sum);

    return 0;
}
