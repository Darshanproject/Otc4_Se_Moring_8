//(Condtion)?exp1:exp2;
// > < >= <= == 
//   && || =!
#include<stdio.h>
main()
{
	int age;
	printf("Enter your age here : ");
	scanf("%d",&age);
	(age > 18)?printf("You are Allowed"):printf("Not Allowed");
}
