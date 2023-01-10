#include <stdio.h>
#include <stdlib.h>
#include <time.h>

	/*	RPYMOE RESHENIY
int f(int m[], int x)
{
	srand(time(NULL));
	for (int i=0; i<x;i++)
	{
			m[i]=rand()%10;
			printf("%4d", m[i]);		
	}
	
	return 0;
}


int main() 
{
	int mas_1[100], mas_2[101];
	int a,b;
	printf("kolichestvo elementov 1 massiva	");
	scanf("%i",&a);
	while(a<0)
	{
		printf("Error. Enter the correct number of array elements	");
		scanf("%i",&a);
	}
	f(mas_1, a);
	printf("\n\n");
	printf("kolichestvo elementov 2 massiva	");
	scanf("%i",&b);
	while(b<0)
	{
		printf("Error. Enter the correct number of array elements	");
		scanf("%i",&b);
	}
	f(mas_2, b);
	
	return 0;
}
*/


	/*	YNIVERSAL`NOE DLY 2-mern. matric	*/
int f(int m[][100], int x, int y, int r)
{
	printf("\n");
	srand(time(NULL));
	for (int i=0; i<x;i++)
	{
		for (int j=0;j<y;j++)
		{
			m[i][j]=rand()%100*r;
			printf("%4d", m[i][j]);		
		}
		printf("\n");
	}
	return 0;
}

int main() 
{
	int mas[100][100];
	int a,b,n;
	printf("kolichestvo massivov		");
	scanf("%i",&n);
	printf("\n");
	int ch=1;
	while(ch<n+1)
	{
		printf("kolichestvo strok %i massiva	", ch);
		scanf("%i",&a);
		while(a<1)
		{
			printf("Error. Enter possible number of lines	");
			scanf("%i",&a);
		}
		printf("kolichestvo stolbcov %i massiva	", ch);
		scanf("%i",&b);
		while(b<1)
		{
			printf("Error. Enter possible number of columns	");
			scanf("%i",&b);
		}
		f(mas, a, b, ch);
		ch++;
		printf("\n");
	}	
	return 0;
}


