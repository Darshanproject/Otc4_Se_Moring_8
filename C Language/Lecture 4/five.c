/*
if(condtion){
if(condtion){
trsue statment;
}else{
false statment;
}
}else{
false statment;
}
*/
#include<stdio.h>
main(){
	int marks;
	printf("Enter your marks : ");
	scanf("%d",&marks);
	if(marks > 0 && marks < 100){
	if(marks > 90 && marks < 100){
	printf("A Grade !!!");
	}else if(marks > 80 && marks <= 90){
		printf("B Grade!!");
	}else if(marks > 60 && marks <=80){
		printf("C Grade !");
	}else if(marks >= 45 && marks  <= 60){
		printf("Pass");
	}else if(marks < 45 && marks > 0){
		printf("Fail");
	}
	}else{
		printf("Invalid Input");
	}
}
