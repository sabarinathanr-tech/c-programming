#include <stdio.h>

int main() {
    int n;
    scanf("%d", & n);

    int arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", & arr[i]);
    }
    int first = 0, last = 0, max = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {

            int left = i;
            int right = j;
            int f = 0;

            while (left < right) {
                if (arr[left] != arr[right]) {
                    f = 1;
                    break;
                }
                left++;
                right--;
            }
            int len = j - i + 1;
            if (f == 0 && len > max) {
                max = len;
                first = i;
                last = j;
            }
        }
    }
    for (int k = first; k <= last; k++) {
        printf("%d ", arr[k]);
    }

    return 0;
}