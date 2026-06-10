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
	for(int i=0; i<row; i++) {
		for(int j=1; j<col; j++) {
			int temp=a[i][j];
			a[i][j]=a[j][i];
			a[j][i]=temp;
		}

	}
	for(int i=0; i<row; i++) {
		for(int j=0; j<col; j++) {
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}

	return 0;
}
