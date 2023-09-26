#include<stdio.h>
main(){
	int l;
	printf("Enter the values :");
	scanf("%d",&l);
	sum(l);
}
void sum(int num){
	int i,j;
	for(i=1;i<=num;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("$");
		}
		printf("\n");
	}
}
