//Write a program to find the sum of n different numbers using 4 functions
#include<stdio.h>

float inp(float *arr,int *n)
{
    printf("Enter the no of elements you want to add : \n");
    scanf("%d",n);

    for(int i =0;i<*n;i++)
    {   
        printf("Element %d : ",(i+1));
        scanf("%f",&arr[i]);
    }
    
}

float sum(float *arr,int *n)
{
	float sum;
	for(int i=0;i<*n;i++)
	{
		sum+=*(arr + i);
	}
	return sum;
}
		

void out(float total)
{
    printf("The sum of Numbers entered is %.3f",total);
}

int main()
{
    int *n;
    float arr[100];
    float tot;
    inp(arr,n);
    tot=sum(arr,n);
    out(tot);
    return 0;
}
