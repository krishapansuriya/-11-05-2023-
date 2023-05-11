#include<stdio.h>
main()
{
	int a=2000,b=3000;
	do{
		if(a%4==0)
		{
			printf("%d\n",a,b);
		}
		a++;
	}while(a<=b);
}
