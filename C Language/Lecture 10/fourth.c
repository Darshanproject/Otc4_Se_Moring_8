//for(int,condtion,updation){
//body of loop
//}
#include<stdio.h>
void main(){
	int i,total;
	for(i=1;i<=10;i++){
//		printf("%d\n",i);
		if(i%2==0){
			printf("\n*\n");
		}else{
			printf("%d\n",i);
		}
	}
	printf("\n This is your total : %d",total);
}
