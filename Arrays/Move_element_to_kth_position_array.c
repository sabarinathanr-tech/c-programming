#include <stdio.h>

int main()
{
	int n;
	scanf("%d",&n);
	int arr[n];
	for(int i=0; i<n; i++) {
		scanf("%d",&arr[i]);
	}

	int k;
	scanf("%d",&k);
	int first=arr[0];

	for(int i=0; i<k-1; i++) {
		arr[i]=arr[i+1];
	}

	arr[k-1]=first;

	for(int i=0; i<n; i++) {
		printf("%d ",arr[i]);
	}
	return 0;
}
