#include <stdio.h>
#include <string.h>

int main()
{
	char s[1001];
	int freq[256]= {0};

	scanf("%s",s);
	int l=strlen(s);
	
	for(int i=0; i<l; i++) {
		if(freq[s[i]]==0) {
			printf("%c",s[i]);
			freq[s[i]]=1;
		}
	}

	return 0;
}
