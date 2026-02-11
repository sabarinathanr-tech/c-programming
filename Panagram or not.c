#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
	char s[1001];
	scanf("%s",s);
	int l=strlen(s);

	int freq[26]= {0};

	for(int i=0; i<l; i++) {
	    if(isalpha(s[i])){
	        s[i]=tolower(s[i]);
     		freq[s[i]-'a']++;
	    }
	}
	for(int i=0; i<26; i++) {
		if(freq[i]==0) {
			printf("Not Panagram");
			return 0;
		}
	}
	printf("Panagram");



	return 0;
}
