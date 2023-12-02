#include<stdio.h>

main()

{
	int i = 1 , n , sum = 1 ;
	
	printf("Enter Value N = ");
	scanf("%d",&n);
	
	while(i<=5)
	{
		printf("%d\n",i);
		sum = sum * i;
		i++;
	}
	printf("factorial Of 1 to N = %d",sum);
}