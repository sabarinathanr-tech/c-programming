#include <stdio.h>

int main()
{
   int n,sum=0;
   scanf("%d",&n);
   int sq=n*n;
   while(sq>0){
       int last=sq%10;
       sum+=last;
       sq/=10;
   }

   if(n==sum){
       printf("It is a Neon no");
   }
   else{
       printf("It is not a Neon no");
   }
    return 0;
}
