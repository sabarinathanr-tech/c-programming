#include <stdio.h>
#include <math.h>

int main()
{
	int n;
	scanf("%d",&n);
	
	int l=n%10,cnt=0;
	
	l=l*l;
	int temp=l;
	n/=10;
	
	
	while(temp>0) {
		cnt++;
		temp/=10;
	}
	
	n=n*(pow(10,cnt))+l;
	printf("%d",n);

	return 0;
}
