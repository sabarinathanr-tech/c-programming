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
	int sumdiag=0,secdiag=0;
	for(int i=0; i<row; i++) {
		for(int j=0; j<col; j++) {
			if(i==j) {
				sumdiag+=arr[i][j];
			}
			if(j==row-i-1) {
				secdiag+=arr[i][j];
			}
		}
	}
  printf("%d",sumdiag+secdiag);
	return 0;
}
