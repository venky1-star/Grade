#include<stdio.h>
main()
{
	int marks;
	printf("Enter marks Outoff 100 : ");
	scanf("%d",&marks);
	if(marks>=85&&marks<=100)
	printf("\nGrade A");
	else if(marks>=70&&marks<=84)
	printf("\nGrade B");
	else if(marks>=55&&marks<=69)
	printf("\nGrade C");
	else if(marks>=40&&marks<=54)
	printf("\nGrade D");
	else if(marks<40)
	printf("\nGrade F");
	else
	printf("\nEnter valid marks");
}
