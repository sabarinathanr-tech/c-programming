#include <stdio.h>

int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    int lcm=a*b;
    while(a!=b){
        if(a>b){
            a-=b;
        }
        else{
            b-=a;
        }
    }
    printf("%d",lcm/a);

    return 0;
}
