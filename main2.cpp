#include <stdio.h>
/* https://github.com/volkodav66/next.git */
main()
 {
 	int a,b;
 	printf("a=");
	scanf("%i",&a);
	printf("b=");
	scanf("%i",&b);
 	if (a>b)
 	{
 		printf("a>b");
	 }
	 else
	 {
	 	if(a==b)
	 	{
	 		printf("a=b");
		 }
		 else
		 {
		 	printf("a<b");
		 }
	 }
}