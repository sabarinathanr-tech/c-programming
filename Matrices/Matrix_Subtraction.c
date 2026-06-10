#include <stdio.h>

int main()
{
	int row,col;
	scanf("%d %d",&row,&col);
	int a[row][col];

	for(int i=0; i<row; i++) {
		for(int j=0; j<col; j++) {
			scanf("%d",&a[i][j]);
		}
	}

	int row1,col1;
	scanf("%d %d",&row1,&col1);
	int b[row1][col1],sub[row1][col1];
	for(int i=0; i<row; i++) {
		for(int j=0; j<col; j++) {
			scanf("%d",&b[i][j]);
		}
	}
	if(row!=row1||col!=col1) {
		return 0;
	}
	for(int i=0; i<row; i++) {
		for(int j=0; j<col; j++) {
			sub[i][j]=a[i][j]-b[i][j];
		}
	}
	printf("\n");
	for(int i=0; i<row; i++) {
		for(int j=0; j<col; j++) {
			printf("%d ",sub[i][j]);
		}
		printf("\n");
	}
	return 0;
}
