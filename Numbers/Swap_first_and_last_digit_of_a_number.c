#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int last = n % 10;
    int first, middle = 0, temp = n / 10;

    while (temp >= 10) {
        middle = middle * 10 + temp % 10;
        temp /= 10;
    }

    first = temp;

    int result = last;
    while (middle > 0) {
        result = result * 10 + middle % 10;
        middle /= 10;
    }
    result = result * 10 + first;

    printf("%d", result);
    return 0;
}
