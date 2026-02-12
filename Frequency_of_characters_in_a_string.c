#include <stdio.h>
#include <string.h>

int main()
{
	char s[1001];
	scanf("%s",s);
	int freq[256]= {0};

	int l=strlen(s);
	for(int i=0; i<l; i++) {
		freq[s[i]]++;
	}
	for(int i=0; i<l; i++) {
		if(freq[s[i]]!=0) {
			printf("%c : %d\n",s[i],freq[s[i]]);
			freq[s[i]]=0;
		}
	}

	return 0;
}
