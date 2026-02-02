#include <stdio.h>

int main()
{
	int row,col;

	scanf("%d %d",&row,&col);

	int arr1[row][col];

	for(int i=0; i<row; i++) {
		for(int j=0; j<col; j++) {
			scanf("%d",&arr1[i][j]);
		}
	}
	int row1,col1;

	scanf("%d %d",&row1,&col1);

	int arr2[row1][col1];
	for(int i=0; i<row1; i++) {
		for(int j=0; j<col1; j++) {
			scanf("%d",&arr2[i][j]);
		}
	}
	int arr3[row][col];
	for(int i=0;i<row;i++){
	    for(int j=0;i<col;j++){
	        arr3[i][j]=arr1[i][j]+arr2[i][j];
	    }
	}
	
	for(int i=0; i<row; i++) {
		for(int j=0; j<col; j++) {
			printf("%d ",arr3[i][j]);
		}
	}
	return 0;
}
