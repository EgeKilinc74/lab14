#include <stdio.h>

int main(){
	
	int i;
	int big1=0;
	int big2=0;
	int sayilar[10];
	
	printf("Sayilari gir:");
	for(i=0 ; i<10 ; i++)
	{
		scanf("%d",&sayilar[i]);
	}

	for(i=0 ; i<9 ; i++)
	{
	 	if(sayilar[i]<sayilar[++i])
			big2=sayilar[i];
			big1=sayilar[++i];
	}
	printf("%d %d",big1,big2);
	return 0;
}

