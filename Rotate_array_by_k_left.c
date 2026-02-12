
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

	for(int i=0; i<k; i++) {
		int first=arr[0];
		for(int j=0; j<n-1; j++) {
			arr[j]=arr[j+1];
		}
		arr[n-1]=first;
	}

	for(int i=0; i<n; i++) {
		printf("%d ",arr[i]);
	}

	return 0;
}
