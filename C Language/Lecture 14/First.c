#include<stdio.h>
void main(){
	int Numbers[10],i,Evenarr[10],j=0,Oddarr[10],k=0,SumEven=0,SumOdd=0;
	for(i=0;i<10;i++){
		printf("Enter your numbers here : ");
		scanf("%d",&Numbers[i]);
		if(Numbers[i]%2==0){
			Evenarr[j]=Numbers[i];
			j++;
			SumEven+=Numbers[i];
		}else{
			Oddarr[k]=Numbers[i];
			k++;
			SumOdd+=Numbers[i];
		}
	}printf("\n This is your origin Array ");
	for(i=0;i<10;i++){
		printf("%d \t",Numbers[i]);	
	}
	
	printf("\n This is your Even array : ");
	for(i=0;i<j;i++){
		printf("%d \t",Evenarr[i]);
	}printf(" \nThis is your odd array :");
	for(i=0;i<k;i++){
		printf("%d \t",Oddarr[i]);
	}
	printf("\n You have this many %d of even numbers in your array ",j);
	printf("\n You have this many %d of odd numbers in your array ",k);
	printf("\n Your Total of even numbers %d",SumEven);
	printf("\n Your Total of odd numbers %d",SumOdd);
}
