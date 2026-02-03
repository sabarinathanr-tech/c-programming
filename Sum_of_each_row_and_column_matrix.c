#include <stdio.h>

int main()
{
	int row,col;
	scanf("%d %d",&row,&col);
	int arr[row][col];

	for(int i=0; i<row; i++) {
		for(int j=0; j<col; j++) {
			scanf("%d",&arr[i][j]);
		}
	}
	printf("------Sum of Rows-------\n");
	for(int i=0; i<row; i++) {
		int sumrow=0;
		for(int j=0; j<col; j++) {
			sumrow+=arr[i][j];
		}
		printf("%d\n",sumrow);
	}
	printf("\n------Sum of Columns-----\n");
	for(int i=0; i<row; i++) {
		int sumcol=0;
		for(int j=0; j<col; j++) {
			sumcol+=arr[j][i];
		}
		printf("%d ",sumcol);
	}
	return 0;
}
