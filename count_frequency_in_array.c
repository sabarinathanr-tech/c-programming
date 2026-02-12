#include <stdio.h>

int main()
{
	int n;
	scanf("%d",&n);
	int arr[n];
	int freq[256]= {0};

	for(int i=0; i<n; i++) {
		scanf("%d",&arr[i]);
		freq[arr[i]]++;
	}

	for(int i=0; i<256; i++) {
		if(freq[arr[i]]!=0) {
			printf("%d : %d\n",arr[i],freq[arr[i]]);
			freq[arr[i]]=0;
		}
	}


	return 0;
}
