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
	int sum=0;
	for(int i=0; i<row; i++) {
		sum+=arr[i][i];
		sum+=arr[i][row-i-1];
	}
	sum-=arr[row/2][row/2];
	printf("%d",sum);
	return 0;
}
