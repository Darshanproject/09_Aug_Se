#include<stdio.h>
main(){
	int a,b;
	printf("Enter your values here :");
	scanf("%d %d",&a,&b);
	sum(a,b);
}

void sum(int a,int b){
	printf("This is sum of two numbers %d",a+b);
}
