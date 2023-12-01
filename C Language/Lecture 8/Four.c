#include<stdio.h>
main(){
	int i,num[5];
	for(i=0;i<5;i++)
	{
		printf("Enter your numbers here : ");
		scanf("%d",&num[i]);
	}
	for(i=0;i<5;i++)
	{
		printf("Your numbers Are : %d \n",num[i]);
	}
}
