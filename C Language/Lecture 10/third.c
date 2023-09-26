#include<stdio.h>
main(){
	int ans;
		int num,num1;
	printf("Enter your values heres :");
	scanf("%d%d",&num,&num1);

	ans=sum(num,num1);
	printf("This is your sum of two numbers : %d",ans);
}

int sum(int a,int b){
	return a+b;
}
