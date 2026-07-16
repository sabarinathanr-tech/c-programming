#include <stdio.h>

int main() {
	int n;
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++){
	    scanf("%d",&arr[i]);
	}
	int cnt=1,max=1;
	for(int i=1;i<n;i++){
	    if(arr[i]>arr[i-1]){
	        cnt++;
	    }
	    else{
	        cnt=1;
	    }
	    if(cnt>max){
	        max=cnt;
	    }
	}
	printf("%d",max);

}

