#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n+1];
    arr[0]=0;
    for(int i=1;i<=n;i++){
        arr[i]=arr[i>>1]+(i&1);
    }
    printf("%d ",arr[0]);
    for(int i=1;i<=n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}