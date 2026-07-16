#include <stdio.h>

int bin(int x){
    if(x==0) return;
    bin(x/2);
    printf("%d",x%2);
}

int main() {
	int n;
	scanf("%d",&n);
	bin(n);
	return 0;
}

