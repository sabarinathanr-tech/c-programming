#include <stdio.h>
int main(){
    int n;
    printf("ENTER A NUMBER : ");
    scanf("%d",&n);

    int k=0;
    int arr[32];

    while(n>0){
        arr[k++]=(n&1)^1;
        n>>=1;
    }

    printf("BINARY OF COMPLEMENT IS : ");
    for(int i=k-1;i>=0;i--){
        printf("%d",arr[i]);
    }

    printf("\nNUMBER COMPLEMENT IS : ");
    int ans=0;
    
    for(int i=k-1;i>=0;i--){
        ans=(ans<<1)|arr[i];
    }
    printf("%d",ans);

    return 0;
}