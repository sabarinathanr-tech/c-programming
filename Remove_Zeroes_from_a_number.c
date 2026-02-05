#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);
	
	int rev=0,place=1;
	
	while(n>0) {
		int last=n%10;
		if(last!=0) {
			rev=last*place+rev;
			place*=10;
		}
		n/=10;
	}
	
	printf("%d",rev);
	
	return 0;
}
