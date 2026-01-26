#include <stdio.h>

int main()
{
    int n,rev=0;
    scanf("%d",&n);
    int temp=n;
    while(n>0){
        rev=rev*10+(n%10);
        n/=10;
    }
    if(temp==rev){
        printf("It is an palindrom");
    }
    else{
        printf("It is not an palindrome");
    }

    return 0;
}
