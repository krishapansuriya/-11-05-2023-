#include<stdio.h>
main()
{
	int a=1,fact=1,n;
	printf("Enter number:-");
	scanf("%d",&n);
	do{
		fact=a*fact;
		a++;
	}while(a<=n);
	printf("%d",fact);
}

