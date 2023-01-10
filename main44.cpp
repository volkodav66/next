#include <iostream>

main() 
{
	int mas[100];
	int n;
	printf("Enter the number of array elements	");
	scanf("%i",&n);
	while(n<0)
	{
		printf("Error. Enter the correct number of array elements	");
		scanf("%i",&n);
	}
	for(int i=0;i<n;i++)
	{
		printf("Enter %i element of the array	", i+1);
		scanf("%i",&mas[i]);
	}
	int min, max;
	min=max=mas[0];
	int sum=0;
	for(int i=0;i<n;i++)
	{
		if(mas[i]>max)
		{
			max=mas[i];
		}
		if(mas[i]<min)
		{
			min=mas[i];
		}
		sum+=mas[i];
	}
	float average=(float)sum/(float)n;
	printf("\nsum=%i\naverage=%f\nmin=%i\nmax=%i", sum,average,min,max);
}