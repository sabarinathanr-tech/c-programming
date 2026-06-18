#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int ans=0;
    while(n){
        ans=(ans<<1)|(n&1);
        n>>=1;
    }
    printf("%d",ans);
    return 0;
}