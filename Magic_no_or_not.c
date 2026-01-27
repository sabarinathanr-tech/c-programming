
#include <stdio.h>

int main()
{
   int n;
   scanf("%d",&n);
   while(n>9){
       int sum=0;
       while(n>0){
           sum+=(n%10);
           n/=10;
       }
       n=sum;
       
   }
   if(n==1){
       printf("It is a Magic no");
   }
   else{
       printf("It is not a Magic no");
   }
    return 0;
}
