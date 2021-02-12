//Write a program to find the sum of n different numbers using 4 functions
#include<stdio.h>

float inp()
{
    int n;
    float sum=0.0,val;
    printf("Enter the no of elements you want to add : \n");
    scanf("%d",&n);

    for(int i =0;i<n;i++)
    {   
        printf("Element %d : ",(i+1));
        scanf("%f",&val);
        sum += val;
        
    }
    return sum;
}

void out(float total)
{
    printf("The sum of Numbers entered is %.3f",total);
}

int main()
{
    float s;
    s= inp();
    out(s);
    return 0;
}
