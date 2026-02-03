#include <stdio.h>

int main()
{
	int row,col;
	scanf("%d %d",&row,&col);

	int a[row][col];

	for(int i=0; i<row; i++)
		for(int j=0; j<col; j++)
			scanf("%d",&a[i][j]);

	int row1,col1;
	scanf("%d %d",&row1,&col1);

	if(col != row1) {
		return 0;
	}

	int b[row1][col1];

	for(int i=0; i<row1; i++)
		for(int j=0; j<col1; j++)
			scanf("%d",&b[i][j]);

	int mul[row][col1];

	for(int i=0; i<row; i++) {
		for(int j=0; j<col1; j++) {
			mul[i][j]=0;
			for(int k=0; k<col; k++) {
				mul[i][j]+=a[i][k]*b[k][j];
			}
		}
	}

	for(int i=0; i<row; i++) {
		for(int j=0; j<col1; j++)
			printf("%d ",mul[i][j]);
		printf("\n");
	}

	return 0;
}
