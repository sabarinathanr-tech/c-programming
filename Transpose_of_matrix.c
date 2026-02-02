#include <stdio.h>

int main()
{
	int row,col;
	scanf("%d %d",&row,&col);
	int arr[row][col];

	for (int i=0; i<row; i++) {
		for(int j=0; j<col; j++) {
			scanf("%d",&arr[i][j]);
		}
	}
	int t[row][col];
	for(int i=0; i<row; i++) {
		for(int j=0; j<col; j++) {
			t[j][i]=arr[i][j];
		}
	}
	printf("\n");
	for(int i=0; i<row; i++) {
		for(int j=0; j<col; j++) {
			printf("%d ",t[i][j]);
		}
		printf("\n");
	}

	return 0;
}
