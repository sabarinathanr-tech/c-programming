#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);   
    int arr[n+1];

    for(int i = 0; i < n+1; i++){
        scanf("%d", &arr[i]);
    }

    for(int i = 0; i < n+1; i++){
        for(int j = i+1; j < n+1; j++){
            if(arr[i] == arr[j]){
                printf("%d ", arr[i]);
                break;
            }
        }
    }

    return 0;
}
