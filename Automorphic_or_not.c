#include <stdio.h>

int main()
{
   int n;
   scanf("%d",&n);
   int sq=n*n;
   if(n==(sq%10)){
       printf("It is a Automorphic no");
   }
   else{
       printf("It is not a Automorphic no");
   }
    return 0;
}
