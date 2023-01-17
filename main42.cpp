#include <iostream>

main() 
{
	int mas1[7];
	for(int i=0;i<7;i++)
	{
		scanf("%i",&mas1[i]);
	}
	
	for(int i=0;i<7;i++)
	{
		printf("%4i",mas1[i]);
	}
	
	int n;
	int mas2[100];
	printf("\n\nkolichestvo elementov	");
	scanf("%i",&n);
	
	for(int i=0;i<n;i++)
	{
		scanf("%i",&mas2[i]);
	}
	
	for(int i=0;i<n;i++)
	{
		printf("%4i",mas2[i]);
	}
}
