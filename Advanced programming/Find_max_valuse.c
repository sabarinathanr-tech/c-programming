#include <stdio.h>

int maxv(int x,int y){return x>y?x:y;}

int main() {
	int n,max,cur;
	scanf("%d %d",&n,&max);
	
	for(int i=2;i<=n;i++){
	    scanf("%d",&cur);
	    max=maxv(max,cur);
	}
	printf("%d",max);

}
