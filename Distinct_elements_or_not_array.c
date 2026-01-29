#include <stdio.h>

int main()
{
	int n, flag = 0;
	scanf("%d", &n);

	int arr[n];
	for(int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}

	for(int i = 0; i < n; i++) {
		for(int j = i + 1; j < n; j++) {
			if(arr[i] == arr[j]) {
				flag = 1;
				break;
			}
		}
		if(flag) break;
	}

	if(flag){
		printf("All the elements are not distinct");
	}
	else{
		printf("All elements are distinct");
	}
	return 0;
}
