#include <iostream>
#include <stdio.h>
#include <math.h>


main() 
{
	int i=1;
	while(i<10)
	{
		printf("%i. Hello\n", i);
		i=++i;
	}
	
	int a=0;
	while(a<15)
	{
		printf("\n%i", a);
		if(a%2!=0)
		{
			printf("	%i - odd number",a);
		}
		a=++a;
	}
	
	int s=5;
	int sum=0;
	printf("\n\n");
	while(s<15)
	{
		sum=sum+s;
		printf("%i+", s);
		s=++s;
	}
	sum=sum+s;
	printf("%i=%i", s, sum);
}