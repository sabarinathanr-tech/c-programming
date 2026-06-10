#include <stdio.h>

int main()
{
   int n,sum=0,fact=1;
   scanf("%d",&n);
   for(int i=1;i<=n;i++){
       for(int j=1;j<=i;j++){
           fact*=j;
       }
       sum+=fact;
       fact=1;
   }
   printf("%d",sum);
    return 0;
}
