//syntax: (Condtion)?exp1:exp2;
//< > <= >= ==
#include<stdio.h>
main(){
	int age;
	printf("Enter the age :");
	scanf("%d",&age);
	(age>18)?printf("Eligable"):printf("Not");
}
