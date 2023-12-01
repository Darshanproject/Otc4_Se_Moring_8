#include<stdio.h>
int sum();
main(){
	int ans=sum();
	printf("\n This is your final answer %d",ans);
}
int sum(){
	int num,num1;
	printf("Enter your first numbers here : ");
	scanf("%d",&num);
	printf("Enter your Second numbers here : ");
	scanf("%d",&num1);
	return num+num1;
}
