#include<stdio.h>
main(){
	int i=0;
	char name[20];
	do{
		printf("Enter your name Here : ");
	scanf("%s",&name);
	printf(" \n %s",name);
	for(i=0;i<=name;i++){
		printf("%c \n",name[i]);
	}
	i++;
	}while(i<1);
}
