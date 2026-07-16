#include <stdio.h>

int main() {
    int n;
    scanf("%d", & n);

    int arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", & arr[i]);
    }
    int sum=0;
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            if((j-i+1) %2!=0){
                for (int k = i;k<=j;k++) {
                     sum+=arr[k];
                }
            }
        }
    }
    printf("%d",sum);
    return 0;
}