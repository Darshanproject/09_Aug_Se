#include<stdio.h>
main(){
	int marks;
	printf("Enter your marks ");
	scanf("%d",&marks);
	if(marks > 0 && marks < 100)
	{
		if(marks >= 90 && marks <100 )
	{
		printf("A grade!!!");
	}else if(marks >=70 && marks <90){
		printf("B Grade !!");
	}else if (marks >= 50 && marks <70)
	{
		printf("C garde!");
	}else if(marks > 35 && marks < 50){
		printf("Just pass ");
	}else{
		printf("fail");
	}
	}else{
		printf("Invaild input");
	}
}
