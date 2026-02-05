#include <stdio.h>

int main() {
	int r, c;
	scanf("%d %d", &r, &c);

	int arr[r][c];

	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) {
			scanf("%d", &arr[i][j]);
		}
	}

	int peri = 0;

	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) {
			if (arr[i][j] == 1) {
				peri += 4;

				if (i > 0 && arr[i-1][j] == 1) peri--;
				if (i < r-1 && arr[i+1][j] == 1) peri--;
				if (j > 0 && arr[i][j-1] == 1) peri--;
				if (j < c-1 && arr[i][j+1] == 1) peri--;
			}
		}
	}

	printf("%d", peri);
	return 0;
}
