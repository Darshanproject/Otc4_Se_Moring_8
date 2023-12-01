//Function with arguments and with return type
#include<stdio.h>
int sum(int a,int b);
main(){
	int ans;
	int num,num1;
	printf("Enter your First number here : ");
	scanf("%d",&num);
	printf("Enter your Second number here : ");
	scanf("%d",&num1);
	ans=sum(num,num1);
	printf("This is your ans %d",ans);
}
int sum(int a,int b){
	return a+b;
}
