#include<stdio.h>
#include<string.h>
void main(){
	int choice;
	float qui,total;
	char answer[3];
	while(1){
			printf("1 IDLI  2       pcs  40rs \n");
	printf("2 DOSA  1       pcs  80rs \n");
	printf("3 PIZZA m1      pcs  120rs \n");
	printf("4 PASTA Bowl1   pcs  220rs \n");
	printf("Enter your items : ");
	scanf("%d",&choice);
	printf("Enter how many plates do you want ? ");
	scanf("%f",&qui);
	switch(choice){
		case 1:
			total+=40*qui;
			break;
		case 2:
			total+=80*qui;
			break;
		case 3:
			total+=120*qui;
			break;
		case 4:
			total+=220*qui;
			break;
	}
	printf("Do you want anything Else ? ");
	printf("Yes or No");
	scanf("%s",&answer);
	if(strcmp(answer,"YES")==0||strcmp(answer,"yes")==0){
		
	}else{
		printf("\nThanks for ordering in our resturant \n");
		break;
	}
	}
	printf("This is your total bill : %.2f",total);
}
