#include <stdio.h>
#include <stdlib.h>
#include <time.h>

main() 
{
	int mas[100][100];
	int n,m;
	printf("n=");
	scanf("%i",&n);
	while(n<1)
	{
		printf("Error. Enter possible number of lines	");
		scanf("%i",&n);
	}
	printf("m=");
	scanf("%i",&m);
	while(m<1)
	{
		printf("Error. Enter possible number of columns	");
		scanf("%i",&m);
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			int ch;
			printf("Enter %i array element	", ch+1);
			scanf("%i",&mas[i][j]);
			ch++;
		}
	}
	printf("\n\n");
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			printf("%7i",mas[i][j]);
		}
		printf("\n\n");
	}
	printf("\n\n\n\n");
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			printf("%7i",mas[j][i]);
		}
		printf("\n\n");
	}
}