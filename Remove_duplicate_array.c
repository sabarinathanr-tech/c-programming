#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int arr1[n];
    int k = 0;

    for(int i = 0; i < n; i++) {
        int found = 0;

        for(int j = 0; j < k; j++) {
            if(arr[i] == arr1[j]) {
                found = 1;
                break;
            }
        }

        if(found == 0) {
            arr1[k] = arr[i];
            k++;
        }
    }

    for(int i = 0; i < k; i++) {
        printf("%d ", arr1[i]);
    }

    return 0;
}
