#include <stdio.h>

int main() {
    int n;
    scanf("%d", & n);

    int arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", & arr[i]);
    }
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            for (int k = j; k >= i; k--) {
                printf("%d ", arr[k]);
            }
            printf("\n");
        }
    }

    return 0;
}