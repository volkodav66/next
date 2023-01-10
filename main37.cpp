#include <iostream>


main()
{
	int sum=0;
	int i=1;
	for(;i<100;i++)
	{
		printf("%i+", i);
		sum=sum+i;
	}
	sum=sum+i;
	printf("%i=%i", i,sum);

}