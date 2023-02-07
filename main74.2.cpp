#include <iostream>
#include <string.h>


char zamena(char str[])
{
	int l=strlen(str);
	printf("Characters	%i\n", l);
 	bool fl=0;
 	while (fl==0)
 	{
 		if(str[0]==' ')
 		{
 			for (int i=0; i<l; i++)
			{
 				str[i]=str[i+1];
			}
		}	
		else
		{
			fl=1;
		}
	}
	l=strlen(str);
	fl=0;
	while (fl==0)
 	{
 		for (int i=l-1; i>-1; i--)
		{
			if(str[l-1]==' ')
 			{
 				str[i]=str[i+1];
 				l=strlen(str);
 			}
 			else			
			{
				fl=1;
			}
		}	
	}
	printf("characters after deletion	%i\n", l);
 	return puts(str);	
}

main() 
{
	char str_1[1000];
	printf("Enter the string	");
	gets(str_1);
	zamena(str_1);
	return 0;
}