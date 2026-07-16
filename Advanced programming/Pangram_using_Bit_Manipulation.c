#include <stdio.h>

int main() {
    char s[101];
    scanf("%s", s);
    
    int flag=0;
    
    for(int i=0;s[i];i++){
        char ch=s[i];
        flag=flag|(1<<ch-'a');
    }
    
    if(flag==(1<<26)-1){
        printf("yes");
    }
    else{
        printf("no");
    }
    
    return 0;
}