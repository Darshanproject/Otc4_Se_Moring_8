#include<stdio.h>
main()
{
	int age;
	printf("Enter your age here : ");
	scanf("%d",&age);
	(age%2==0)?printf("Even"):printf("Odd");
	(age>0)?printf("\nPos\n"):printf("\nNeg\n");
}
