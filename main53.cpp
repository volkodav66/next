
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
	srand(time(NULL));
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			mas[i][j]=rand()%10+(-2);
		}
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			printf("%7i",mas[i][j]);
		}
		printf("\n\n");
	}
	
	printf("\n\n\n\n");
	
	for(int r=0;r<m;r++)
	{
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<m-1;j++)
			{
				if(mas[i][j]>mas[i][j+1])
				{
					int q=mas[i][j];
					mas[i][j]=mas[i][j+1];
					mas[i][j+1]=q;
				}
			}
		}
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			printf("%7i",mas[i][j]);
		}
		printf("\n\n");
	}
	
	
}