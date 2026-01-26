#include <stdio.h>

int main()
{
   int n;
   scanf("%d",&n);
   for(int i=1;i<=n;i++){
       if(i*i==n){
           printf("It is a perfect square");
           return 0;
       }
   }
   printf("It is not a perfect square");
   

    return 0;
}
