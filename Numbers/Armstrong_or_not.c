#include <stdio.h>
#include <math.h>

int main() {
    int n, cnt = 0, sum = 0;
    scanf("%d", &n);
    int temp = n, t = n;
    while (t > 0) {
        cnt++;
        t /= 10;
    }
    while (n > 0) {
        int last = n % 10;
        sum += (int)pow(last, cnt);
        n /= 10;
    }
    if (temp == sum)
        printf("It is an Armstrong number");
    else
        printf("It is not an Armstrong number");
    return 0;
}
