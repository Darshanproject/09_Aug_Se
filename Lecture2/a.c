/*
$****
*$***
**$**
***$*
****$       

looping statements 
there are 3 types of looping statements 
1) for loop
syntax for :
for(ini;condtion;updation)
{
	body of loop 
}
2) while loop
3) do while loop
*/
#include<stdio.h>
main()
{
	int i,j;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("*");
		}
		printf("\n");
	}
}


