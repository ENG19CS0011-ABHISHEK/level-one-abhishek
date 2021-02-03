//Write a program to add two user input numbers using one function.
#include<stdio.h>
int sum(int x , int y)
{
	int c ;
	c=x+y;
	return c;
}

int main()
{
	int a,b,s;
	printf("Enter The First Number :\n");
	scanf("%d",&a);
    	printf("Enter The Second Number :\n");
	scanf("%d",&b);
	s=sum(a,b);
	printf("Sum Of %d And %d Is : %d",a,b,s);
	return 0; 
}
