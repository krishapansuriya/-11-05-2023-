#include<stdio.h>
main()
{
	int a=1,n;
	printf("Enter any number:-");
	scanf("%d",&n);
	do{
		if(a%2==1)
		{
			printf("%d\n",a);
		}
		a++;
	}while(a<=n);
}
