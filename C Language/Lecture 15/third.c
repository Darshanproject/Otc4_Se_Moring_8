/*
void main(){
function_name(arguments);

}
datatype function_name(parameters){
function body;
}
*/
#include<stdio.h>
void sum(int ,int);
void main(){
	int numbers,numbers2;
	printf("Enter your numbers here : ");
	scanf("%d%d",&numbers,&numbers2);
	sum(numbers,numbers2);
}

void sum(int num,int num2){
	printf("This is your number 1 %d and Number 2 %d  and total is %d",num,num2,num+num2);
}
