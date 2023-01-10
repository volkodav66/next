#include <iostream>


main() 
{
	char str_1[100];
	gets(str_1);
	while(strlen(str_1)<2)
	{
		printf ("The number of characters must be between 2 and 99	");
		gets(str_1);
	}
	for (int i=1, j=i-1;j<strlen(str_1);j++)
	{
		str_1[j]=str_1[j+1];
	}
	puts(str_1);
	
	char str_2[100],str_3[100];
	gets(str_2);
	while(strlen(str_2)<2)
	{
		printf ("The number of characters must be between 2 and 99	");
		gets(str_2);
	}
	for (int i=0,j=strlen(str_2)-1; i<strlen(str_2),j>-1; i++,j--)
	{
		str_3[i]=str_2[j];
	}
	puts(str_3);
}