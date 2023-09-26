#include<stdio.h>
main(){
	int a,b,ans;
	printf("Enter the values : ");
	scanf("%d%d",&a,&b);
	ans=sum(a,b);
	printf("Ans = %d",ans);
}
int sum(int n,int n1){
	return n+n1;
} 
