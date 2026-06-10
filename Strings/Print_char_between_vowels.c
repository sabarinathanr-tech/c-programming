#include <stdio.h>
#include <string.h>
int main()
{
	char s[1001];
	scanf("%s",s);
	int n=strlen(s);

	for(int i=0; i<n; i++) {
		if((s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u') && (s[i+2]=='a'||s[i+2]=='e'||s[i+2]=='i'||s[i+2]=='o'||s[i+2]=='u'))
			printf("%c",s[i+1]);
	}

	return 0;
}
