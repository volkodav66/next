#include <iostream>
#include <stdio.h>

int main() 
{
	for (int i=1;i<10;i++)
	{
		printf("%i*5=%i\n", i,i*5);
	}
	
	printf("\nGuess the number:\n\n");
	int a=5;
	while(a!=7)
	{
		scanf("%i",&a);
		if (a==7)
		{
			printf("Guessed right");
			break;
		}
		else
		{
			if(a>10)
			{
				printf("%i more than 10\n", a);
			}
			else
			{
				if (a<10)
				{
				printf("%i less 10\n", a);
				}
				else
				{
				printf("%i equals 10\n", a);
				}
			}
			
			for(int c=2;c<4;c++)
			{
				if(a%c==0)
				{
					printf("%i is divisible by %i without a remainder\n", a, c);
				}
				else
				{
					printf("%i is not divisible by %i without a remainder\n", a, c);
				}
			}
			
			if(a>7)
			{
				printf("%i more than guessed number\n", a);
				printf("\nTry once more:\n");
			}
			else
			{
				if(a<7)
				{
					printf("%i less than guessed number\n", a);
					printf("\nTry once more:\n");
				}
			}
		}
	}
}