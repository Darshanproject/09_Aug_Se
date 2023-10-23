#include<stdio.h>
main(){
	char name[20],name1[20];
	printf("Enter your names here :");
	scanf("%s%s",&name,&name1);
	printf("\n this is your reverse string : %s ",strrev(name));
	printf("\n this is concatenet string : %s ",strcat(name1,name));
}

