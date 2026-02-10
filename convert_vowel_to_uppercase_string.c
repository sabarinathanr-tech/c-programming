#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
	char s[100];
	fgets(s,sizeof s,stdin);
	int l=strlen(s)-1;
	int i=0;
	while(s[i]!='\0') {
		if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u') {
			s[i]=toupper(s[i]);
		}
		i++;
	}
	printf("%s",s);

	return 0;
}
