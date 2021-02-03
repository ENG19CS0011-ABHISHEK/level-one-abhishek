//Write a program to find the volume of a tromboloid using one function
#include<stdio.h>
float vol(float h, float b, float d)
{
	float v;
	v=(0.33)*((h*d*b)+(d/b));
	return v;
}

	
int main()
{
	float h,b,d,volume;
	printf("Enter the value for  h :\n");
	scanf("%f",&h);
printf("Enter the value for  b :\n");
	scanf("%f",&b);
printf("Enter the value for d :\n");
	scanf("%f",&d);
	volume = vol(h,b,d);
	printf("The volume of Tromboloid is %f .",volume);
return 0;
}

