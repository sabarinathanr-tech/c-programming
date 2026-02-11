#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
	char s1[1001];
	char s2[1001];
	scanf("%s",s1);
	scanf("%s",s2);
	int l1=strlen(s1);
	int l2=strlen(s2);

	if(l1!=l2) {
		printf("Not Anagram");
		return 0;
	}

	int freq[26]= {0};
	for(int i=0; i<l1; i++) {
		if(isalpha(s1[i])) {
			s1[i]=tolower(s1[i]);
			freq[s1[i]-'a']++;
		}
		if(isalpha(s2[i])) {
			s2[i]=tolower(s2[i]);
			freq[s2[i]-'a']--;
		}
	}

	for(int i=0; i<26; i++) {
		if(freq[i]!=0) {
			printf("Not Anagram");
			return 0;
		}
	}
	printf("Anagram");


	return 0;
}
