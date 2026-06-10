#include <stdio.h>
int main(){
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);

    int x=(b*100+c),y=(c*10+b);

    if(x==a*a){
        printf("YES");
    }
    else if(y==a*a){
        printf("YES");
    }
    else{
        printf("NO");

    }
    return 0;
}