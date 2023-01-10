#include <stdio.h>
#include <iostream>

int	sqrt()
{
	int a;
	printf("a=");
	scanf("%i",&a);
	for (float i=0; i<a+1; i++)
	{
		if (i*i==a)
		{
			a=i;
			printf("%i square numbers %i\t", a*a,a);
			printf("by number value\n");
			return a;
		}
	}
	printf("No natural roots\t by number value\n");
	return a;
}

int sqrt(int *pb)
{
	int z=0;
	for (int i=0; i<(*pb)+1; i++)
	{	
		if (i*i==(*pb))
		{
			z=i;
			(*pb)=i;
			printf("%i square numbers %i\t", (*pb)*(*pb),*pb);
			printf("by pointer\n"); 
			return *pb;			
		}
	}
	printf("No natural roots\t by pointer\n");
	return *pb;
	
}

int sqrt(int &c)
{
	for (int i=0; i<c+1; i++)
	{
		if (i*i==c)
		{
			c=i;
			printf("%i square numbers %i\t", c*c,c);
			printf("by reference\n"); 
			return c;
		}
	}
	printf("No natural roots\t by reference\n");
	return c;	
}

int main()
{
	int b,c;
	sqrt();
	printf("b=");
	scanf("%i",&b);
	sqrt(&b);
	printf("c=");
	scanf("%i",&c);
	sqrt(c);
	return 0;
}

