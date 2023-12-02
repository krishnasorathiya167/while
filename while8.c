#include<stdio.h>

main()
{
	int i = 1 , n , sum=0 ;
	printf("Enter Value N = ");
	scanf("%d",&n);
	
	while(i<=n)
	{
		printf("%d\n",i);
		sum = sum + i;
		i++;	
	}
	printf("sum Of 1 to N = %d",sum);
}