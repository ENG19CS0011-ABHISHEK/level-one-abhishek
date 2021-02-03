//Write a program to add two user input numbers using 4 functions.
#include<stdio.h>

int inp()
{
	int x;
	printf("Enter The Value : \n");
	scanf("%d",&x);
	return x;
}

int sum(int a,int b)
{
	int c;
	c = a+b;
	return c;
}

void out(int x,int y,int z)
{
	printf("The Sum Of %d and %d is %d .",x,y,z);
}


int main()
{
	int a,b,c;
	a=inp();
	b=inp();
	c=sum(a,b);
	out(a,b,c);
	return 0;
}
