#include<stdio.h>
main()
{
	int a=1,sum=0,n;
	printf("Enter number:-");
	scanf("%d",&n);
	do{
		sum=a+sum;
		a++;
	}while(a<=n);
	printf("%d",sum);
}
