#include<stdio.h>

main()
{
	int i = 1 , n ;
	
	printf("Enter Value Of N = ");
	scanf("%d",&n);
	
	while(i<=n)
	{
		if(i%2==1)
		{
			printf("%d\n",i);
		}
		i++;
	}
}