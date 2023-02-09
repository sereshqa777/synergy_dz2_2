#include <stdio.h>

main()
{
	int a,b;
	printf("a=");
	scanf("%i",&a);
	printf("b=");
	scanf("%i",&b);
	if(a>b)
	{
		printf("%i > %i",a,b);
	}
	else
	{
		if(a==b)
		{
			printf("%i=%i",a,b);
		}
		else
		{
		printf("%i > %i",b,a);	
		}		
	}
	return 0;
}
