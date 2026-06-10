#include <stdio.h>

int main()
{
    int n1, n2;
    scanf("%d %d", &n1, &n2);

    int a[n1], b[n2], c[n1 + n2];

    for(int i = 0; i < n1; i++){
        scanf("%d", &a[i]);
    }

    for(int i = 0; i < n2; i++){
        scanf("%d", &b[i]);
    }

    int i = 0, j = 0, k = 0;

    while(i < n1 && j < n2){
        if(a[i] < b[j]){      
            c[k++] = a[i++];
        } else {
            c[k++] = b[j++];
        }
    }

    while(i < n1){
        c[k++] = a[i++];
    }

    while(j < n2){
        c[k++] = b[j++];
    }

    for(int i = 0; i < n1 + n2; i++){
        printf("%d ", c[i]);
    }

    return 0;
}
