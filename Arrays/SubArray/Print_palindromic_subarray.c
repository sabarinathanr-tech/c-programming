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

            int left = i;
            int right = j;
            int flag = 0;

            while (left < right) {
                if (arr[left] != arr[right]) {
                    flag = 1;
                    break;
                }
                left++;
                right--;
            }

            if (flag == 0) {
                for (int k = i; k <= j; k++) {
                    printf("%d ", arr[k]);
                }
                printf("\n");
            }
        }
    }

    return 0;
}