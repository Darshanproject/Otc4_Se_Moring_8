//Control statements
/*
simple if
if(Condtion){
true statement
}
if else
if(condtion){
true statement
}else{
false statment;
}
*/
#include<stdio.h>
main(){
	int age;
	printf("Enter your age here : ");
	scanf("%d",&age);
	if(age > 18)
	{
		printf("Allowed");
	}else{
		printf("Not Allowed");
	}
}

