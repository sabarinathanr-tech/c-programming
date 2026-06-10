#include <stdio.h>

int main()
{
    for(int i=65;i<=90;i++){
        if(i>='A'&&i<='Z'){
            printf("%c ",i);
        }
    }

    printf("\n");
    
    for(int i=97;i<=122;i++){
        if(i>='a'&&i<='z'){
            printf("%c ",i);
        }
    }
  
	return 0;
}
