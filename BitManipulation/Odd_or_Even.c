#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    printf("It is %s",(n&1)?"ODD":"EVEN");
    return 0;
}