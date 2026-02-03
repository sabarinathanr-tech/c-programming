#include <stdio.h>

int main()
{
	int row,col;
	scanf("%d %d",&row,&col);

	if(row != col) {
		printf("Not symmetric");
		return 0;
	}

	int a[row][col];

	for(int i=0; i<row; i++) {
		for(int j=0; j<col; j++) {
			scanf("%d",&a[i][j]);
		}
	}

	for(int i=0; i<row; i++) {
		for(int j=0; j<col; j++) {
			if(a[i][j] != a[j][i]) {
				printf("Not symmetric");
				return 0;
			}
		}
	}

	printf("It is symmetric");
	return 0;
}
