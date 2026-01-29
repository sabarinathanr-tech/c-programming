#include <stdio.h>
int main(){
    int n,flag=0;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        for(int j=1;j<=n;j++){
            if(arr[i]==arr[j]){
                printf("%d",arr[i]);
                flag=1;
                break;
            }
        }
        if(flag==1){
            break;
        }
    }
}
