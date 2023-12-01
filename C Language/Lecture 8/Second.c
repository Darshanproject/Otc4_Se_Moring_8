#include<stdio.h>
int sum(int num,int num1);
main(){
	int num,num1,ans;
	printf("Enter your values here : ");
	scanf("%d",&num);
	printf("Enter your values here : ");
	scanf("%d",&num1);
	ans=sum(num,num1);
	printf("This is your final answer : %d",ans);
}
int sum(int num,int num1){
	return num+num1;
}
