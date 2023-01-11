#include <stdio.h>

int main(){
	
	int i;
	char gecici;
	char str[10];
	
	printf("String ifade gir:");
	gets(str);
	
	for(i=0 ; i!='\0' ; i++)
	{	
		if(str[i]>=str[++i])
		{
			gecici=str[i];
			str[++i]=str[i];
			str[i]=gecici;	
		}
		else
			continue;
	}
	puts(str);
	return 0;
}

