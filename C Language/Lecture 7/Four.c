//Function without arguments and with return type
#include<stdio.h>
int sum();
main(){
	int ans;
	ans=sum();
	printf("This is your ans %d",ans);
}
int sum(){
	int num,num1;
	printf("Enter your First number here : ");
	scanf("%d",&num);
	printf("Enter your Second number here : ");
	scanf("%d",&num1);
	return num+num1;
}
