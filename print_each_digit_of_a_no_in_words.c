#include <stdio.h>

int main()
{
	int n;
	scanf("%d",&n);
	int rev=0;
	while(n>0) {
		rev=rev*10+(n%10);
		n/=10;
	}

	while(rev>0) {
		int last=rev%10;
		switch(last) {
		case 0:
			printf("Zero ");
			break;
		case 1:
			printf("one ");
			break;
		case 2:
			printf("two ");
			break;
		case 3:
			printf("three ");
			break;
		case 4:
			printf("four ");
			break;
		case 5:
			printf("five ");
			break;
		case 6:
			printf("six ");
			break;
		case 7:
			printf("seven ");
			break;
		case 8:
			printf("eight ");
			break;
		case 9:
			printf("nine ");
			break;
		default:
			printf("not valid");
		}
		rev/=10;
	}
	return 0;
}
