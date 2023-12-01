#include<stdio.h>
void sum();//pre decleartion
main(){
	sum();
}
void sum(){
	int num,num1;
	printf("Enter your First number here :");
	scanf("%d",&num);
	printf("Enter your Second number here :");
	scanf("%d",&num1);
	printf("This is your addtion of two numbers %d + %d = %d",num,num1,num+num1);
}
