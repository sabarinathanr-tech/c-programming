#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);

    int arr[n];

    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    for(int j=1;j<=n;j++){        
        int flag = 0;

        for(int i=0;i<n-1;i++){    
            if(arr[i] == j){
                flag = 1;
                break;
            }
        }

        if(flag == 0){            
            printf("%d\n", j);
            break;
        }
    }

    return 0;
}
