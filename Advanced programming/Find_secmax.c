#include <stdio.h>

int main() {
	int n,fmax,smax=-1,cur;
	scanf("%d %d",&n,&fmax);
	
	for(int i=2;i<=n;i++){
	    scanf("%d",&cur);
	    if(cur>fmax){
	        smax=fmax;
	        fmax=cur;
	    }
	    else if(cur>smax) smax=cur;
	}
	printf("%d %d",fmax,smax);

}

