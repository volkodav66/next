#include <iostream>
#include <string.h>

/*zamena first and last BYKVA*/
char zamena(char str[], char c)
{
 	int l=strlen(str);
 	int a=0;
 	bool fl=0;
	while(fl==0)
	{
 		for (int i=0; i<l; i++)
 		{
 			if(str[i]==' ')
 			{
 				a=a+1;
			}
			else
			{
				if(i==a)	
 				{
 					str[i]=c;
 					fl=1;
				}
			}
		}
	}
	fl=0;
	int b=l-1;
	while(fl==0)
	{
		for (int i=l-1; i>-1; i--)
 		{
			if(str[i]==' ')
 			{
 				b--;
			}
			else
			{
				if(i==b)	
 				{
 					str[i]=c;
 					fl=1;
				}
			}
		}
	}
 	return puts(str);
}

main() 
{
	char str_1[1000];
	printf("Enter the string	");
	gets(str_1);
	char c;
	printf("Enter character		");
	scanf("%c", &c);
	printf("\n");
	zamena(str_1, c);
	return 0;
}