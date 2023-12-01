//Function with arguments and without return type
#include<stdio.h>
void sum(int a,int b);
main(){
	int num,num1;
	printf("Enter your First Number here : ");
	scanf("%d",&num);
	printf("Enter your Second Number here : ");
	scanf("%d",&num1);
	sum(num,num1);
}

void sum(int a,int b){
	printf("This is your addtion %d",a+b);
}
