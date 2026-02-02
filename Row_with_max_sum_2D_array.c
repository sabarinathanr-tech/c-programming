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
	int maxrow=0,maxsum=0;
	for(int i=0; i<row; i++) {
		int rowsum=0;
		for(int j=0; j<col; j++) {
			rowsum+=arr[i][j];
		}
		if(rowsum>=maxsum) {
			maxsum=rowsum;
			maxrow=i;
		}
	}
	printf("Max sum's row %d\n",maxrow);
	printf("Max sum %d",maxsum);
	return 0;
}
