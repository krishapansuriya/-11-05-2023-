#include<stdio.h>
main()
{
	int i=1,n,mul;
	printf("Enter any number:-");
	scanf("%d",&n);
	do{
		mul=n*i;
		printf("%d*%d=%d\n",n,i,n*i);
		i++;
	}while(i<=n,i<=10);
}
