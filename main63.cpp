#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <time.h>

main() 
{
	char str_1[100];
	gets(str_1);
	while(strlen(str_1)<2)
	{
		printf ("The number of characters must be between 2 and 99	");
		gets(str_1);
	}
	printf("Second characters %c\n\n",str_1[1]);
	
	char str_2[100];
	gets(str_2);
	while(strlen(str_2)<2)
	{
		printf ("The number of characters must be between 2 and 99	");
		gets(str_2);
	}
	int q=strlen(str_2);
	printf("Last element of the line %c \n", str_2[q-1]);
	srand (time(NULL)); 
	int r_1=0,r_2=0;
	
	while(r_1==r_2)
	{
		if(q=2)
		{
			r_1=0;r_2=1;
		}
		else
		{
			r_1=rand()%(q-1);
			r_2=rand()%(q-1);
		}
	}
	char buf=str_2[r_1];
	str_2[r_1]=str_2[r_2];
	str_2[r_2]=buf;
	puts(str_2);
	printf("\n\n");
	
	char str_3[100];
	gets(str_3);
	while(strlen(str_3)<2)
	{
		printf ("The number of characters must be between 2 and 99	\n");
		gets(str_3);
	}
	int i;
	printf("what element to remove? \n");
	scanf("%i", &i);
	
	for (int j=i-1;j<strlen(str_3);j++)
	{
		str_3[j]=str_3[j+1];
	}
	puts(str_3);
}
