#include<stdio.h>
main()
{
	int i,even=0,odd=0,even_total,odd_total,num;
	for(i=1;i<=10;i++)
	{
		printf("Enter the numbers :");
		scanf("%d",&num);
		if(num%2==0)
		{
			even++;
			even_total+=num;
		}else{
			odd++;
			odd_total+=num;
		}
	}
	printf("This is total of even %d \n",even_total);
	printf("This is total of odd %d \n",odd_total);
	printf("You got this muschj of even numbers in your loop %d \n",even);
	printf("You got this muschj of odd numbers in your loop %d \n",odd);
}
