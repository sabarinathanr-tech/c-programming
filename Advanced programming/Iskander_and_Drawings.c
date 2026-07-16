#include <stdio.h>

void solve(){
    int n,csl=0,msl=0;
    char s[101];

    scanf("%d%s",&n,s);

    for(int i=0;s[i];i++){
        if(s[i]=='#'){
            if(++csl>msl)
                msl=csl;
        }
        else{
            csl=0;
        }
    }

    printf("%d\n",(msl+1)/2);
}

int main(){

    int t;
    scanf("%d",&t);

    while(t--){
        solve();
    }

    return 0;
}