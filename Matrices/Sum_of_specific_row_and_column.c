#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n][n];

    int rowsum=0,colsum=0,x;

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    scanf("%d",&x);
    for(int i=0;i<n;i++){
        rowsum+=arr[x-1][i];
        colsum+=arr[i][x-1];
    }
    printf("Rowsum: %d Columnsum: %d",rowsum,colsum);

    return 0;
}