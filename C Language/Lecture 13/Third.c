#include<stdio.h>
void main(){
	int i,arr[10],even[10],j=0,odd[10],k,Counter_Even=0,Counter_odd=0,Total_Even=0,Total_odd=0,max=0;
	for(i=0;i<10;i++){
		printf("Enter your numbers here  : ");
		scanf("%d",&arr[i]);
		
		if(arr[i]%2==0){
			even[j]=arr[i];
			Total_Even+=arr[i];
			j++;
		}if(arr[i]%2!=0){
			odd[k]=arr[i];
			Total_odd+=arr[i];
			k++;
		}
		max=arr[0];
		if(max<arr[i]){
			max=arr[i];
		}
	}printf("\nThis are your even numbers : ");
	for(i=0;i<j;i++){
		printf( "%d \t",even[i]);
	}
	printf("\nThis is odd numbers array : ");
	for(i=0;i<k;i++){
		printf( "%d \t",odd[i]);
	}
	printf("\nThis are your first numbers which are stored in array of First even = %d ,First odd = %d and First normal = %d array",arr[0],even[0],odd[0]);
	printf("\nThis is your total of even numbers : %d",Total_Even);
	printf("\nThis is your total of odd numbers : %d",Total_odd);
	printf("\n This is your max value %d",max);
}
