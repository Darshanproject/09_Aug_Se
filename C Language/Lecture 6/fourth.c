#include<stdio.h>
main(){
	int arr[5],i;
	printf("Enter your 5 values");
	for(i=0;i<5;i++)
	{
		printf("Enter the values [%d] : ",i);
		scanf("%d",&arr[i]);
	}
	printf("\nthis is your arr \n");
	for(i=0;i<5;i++)
	{
		printf("%d\n",arr[i]);
	}
}
