/*
we can use a to z cap sa
we can use numbers at last or middle
white spaces are not allowed _
it should not be any keyword

int %d
char %c %s
double %lf
float %f
*/
#include<stdio.h>
main()
{ 
	int  Num=03;
	double Num1=25.52;
	float Num2=2001.0009;
	char name='D';
	char name1[20]="Darshan";
	
	printf("%d\n",Num);
	printf("%lf",Num1);
	printf("\n%.2f",Num2);
	printf("\n%c",name);
	printf("\n%s",name1);
}
