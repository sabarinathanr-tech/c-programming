#include <stdio.h>

int main() {
    int n;
    scanf("%d", & n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", & arr[i]);
    }
    int max = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            int sum = 0;
            for (int k = i; k <= j; k++) {
                sum += arr[k];
            }
            if (sum % 2 == 0) {
                if (sum > max) {
                    max = sum;
                }
            }
        }
    }
    printf("%d", max);

}