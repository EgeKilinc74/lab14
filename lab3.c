#include <stdio.h>
#include <string.h>

int sesli_bulma(char []);

int main(){
	
	char cumle[40];
	
	printf("String bir ifade gir:");
	gets(cumle);	
	
	sesli_bulma(cumle);
	
	printf("%d",sesli_bulma(cumle));
	
	return 0;
}

int sesli_bulma(char cumle[])
{
	int i;
	int vowels=0;
	for(i=0 ; i<strlen(cumle) ; i++)
	{
		if(cumle[i]=='a' || cumle[i]== 'e'|| cumle[i]=='i' || cumle[i]== 'o' || cumle[i]=='u' || cumle[i]=='I')
		{
			vowels++;
		}
		else 
		continue;
	}
	
	return vowels;
}
