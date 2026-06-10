#include <stdio.h>
int main(){
    int x,y,z;
    scanf("%d%d%d",&x,&y,&z);

    for(int i=x;i<=z;i++){
        printf("%d ",i);
    }
    printf("\n");
    
    for(int i=y;i>=x;i--){
        printf("%d ",i);
    }
}