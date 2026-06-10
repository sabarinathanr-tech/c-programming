#include <stdio.h>

int main()
{
	int n;
	scanf("%d",&n);
	int arr[n];

	int max=-1,secmax=-1;

	for(int i=0; i<n; i++) {
		scanf("%d",&arr[i]);
		if(arr[i]>max) {
			secmax=max;
			max=arr[i];
		}
		else if(arr[i]>secmax && arr[i]!=max) {
			secmax=arr[i];
		}

	}
	printf("%d",secmax);

}
