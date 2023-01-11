#include <stdio.h>

void ekleme (int []);

int main()
{
	int dizi[20];
	int sayi;
	int i;
	
	printf("Diziyi doldur");
	for(i=0 ; i<3 ;i++)
	{
		scanf("%d",&dizi[i]);	
	}
	ekleme(dizi);
		
	return 0;
}

void ekleme(int dizi[])
{
	int sayi,gecici,i,basamak=0;
	printf("Diziye eklemek istedigin sayi:");
	scanf("%d",&sayi);
	
	for(i=0 ; i!='\0' ; i++)
	{
		if(dizi[i]<sayi)
		{
			basamak++;
		}
		
	}
	for(i=20 ; i=basamak ; i--)
	{
		dizi[i]=dizi[i+1];
		
	}
		dizi[basamak]=sayi;
	
    printf(dizi);
}
