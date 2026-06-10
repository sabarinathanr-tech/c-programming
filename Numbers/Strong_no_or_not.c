#include <stdio.h>

int main()
{
   int n,sum=0,fact=1;
   scanf("%d",&n);
   int temp=n;
   while(n>0){
       int last=n%10;
       for(int i=1;i<=last;i++){
           fact*=i;
       }
       sum+=fact;
       fact=1;
       n/=10;
   }

   if(temp==sum){
       printf("It is a Strong no");
   }
   else{
       printf("It is not a strong no");
   }
    return 0;
}
