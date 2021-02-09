//Write a program to find the sum of n different numbers using 4 functions
#include<stdio.h>

int main()
{
	float arr[100];
	int n;
	float sum=0;
	printf("Enter the no of elements you want to calculate the sum  : \n");
	scanf("%d",&n);
	printf("Enter the elements one-by-one: \n");
	for(int i=0;i<n;i++)
	{
		printf("Element - %d : ",i+1);
		scanf("%f",&arr[i]);
	}
	
	for(int i=0;i<n;i++)
	{
		sum += arr[i];
	}
	
	printf("The sum of the elements is %.3f.",sum);
	return 0;
}
