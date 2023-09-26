#include<stdio.h>
main(){
	int ans;
	ans=sum();
	printf("This is your sum of two numbers : %d",ans);
}

int sum(){
	int num,num1;
	printf("Enter your values heres :");
	scanf("%d%d",&num,&num1);
	return num+num1;
}
