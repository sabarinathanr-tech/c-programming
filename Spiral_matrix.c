#include <stdio.h>

int main()
{
	int r,c;
	scanf("%d %d",&r,&c);
	int arr[r][c];
	for(int i=0; i<r; i++) {
		for(int j=0; j<c; j++) {
			scanf("%d",&arr[i][j]);
		}
	}
	int temp[r*c];
	int k=0;
	int top=0,bottom=r-1;
	int left=0,right=c-1;

	while(left<=right && top<=bottom) {
		for(int i=left; i<=right; i++) {
			temp[k++]=arr[top][i];
		}
		top++;
		for(int j=top; j<=bottom; j++) {
			temp[k++]=arr[j][right];
		}
		right--;
		if(top<=bottom) {
			for(int i=right; i>=left; i--) {
				temp[k++]=arr[bottom][i];
			}
			bottom--;
		}
		if(left<=right) {
			for(int j=bottom; j>=top; j--) {
				temp[k++]=arr[j][left];
			}
			left++;
		}
	}



	for(int i=0; i<k; i++) {
		printf("%d ",temp[i]);
	}

	return 0;
}
