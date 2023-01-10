#include <iostream>


main() 
{
	int n, a_max, a_min, a_i, z, min=0, max=0;
	float average, sum=0;
	printf("Enter the number of elements	");
	scanf("%i",&n);
	while(n<0)
	{
		printf("Error. Enter the allowed number of variables	");
		scanf("%i",&n);
	}
	if(n>0)	
	{
		printf("\nEnter 1 number	");
		scanf("%i",&z);
		a_max=z;
		a_min=z;
		sum=z;
		for (int i=2;i<n+1;i++)
		{
			printf("Enter %i number	", i);
			scanf("%i",&a_i);
			if(a_i>a_max)
			{
				a_max=a_i;
			}
			if(a_i<a_min)
			{
				a_min=a_i;
			}	
			sum=sum+a_i;
		}
		average=sum/n;
		printf("\nmax=%i	\n", a_max);
		printf("min=%i	\n", a_min);
		printf("sum=%f	\n", sum);
		printf("average=%f	\n", average);
	}
	else
	{
		printf("\nmax=0	\n");
		printf("min=0	\n");
		printf("sum=0	\n");
		printf("average=0	\n");
	}
}