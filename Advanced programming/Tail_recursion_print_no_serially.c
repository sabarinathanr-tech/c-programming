#include <stdio.h>

int printvals(int val){
    
    if(val==0) return;
    
    printf("%d ",val);
    printvals(val-1);
}

int main() {
    
    int n;
    scanf("%d",&n);
    printvals(n);
    
    return 0;
}