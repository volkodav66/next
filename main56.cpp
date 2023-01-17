#include <stdio.h>
#include <stdlib.h>
#include <time.h>
 
main()
{
		/*task number 1*/
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
	bool fl=true;
	while(fl)
	{
		fl=false;
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<m-1;j++)
			{
				if(mas[i][j]>mas[i][j+1])
				{
					int q=mas[i][j];
					mas[i][j]=mas[i][j+1];
					mas[i][j+1]=q;
					fl=true;
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

		/*task number 2 */
	printf("\n\n\n\n");
	for(int i=0;i<n;i++)
	{
		int z=mas[i][0];
		mas[i][0]=mas[i][m-1];
		mas[i][m-1]=z;
		for(int j=0;j<m;j++)
		{
			printf("%7i",mas[i][j]);
		}
		printf("\n\n");
	}
	
}
