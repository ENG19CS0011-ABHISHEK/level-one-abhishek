//WAP to find the volume of a tromboloid using 4 functions.
#include<stdio.h>

void inp(float *h,float *b,float *d)
{
	printf("Enter the value for  h :\n");
	scanf("%f",&*h);
    printf("Enter the value for  b :\n");
	scanf("%f",&*b);
    printf("Enter the value for d :\n");
	scanf("%f",&*d);
}

float vol(float h, float b, float d)
{
	float v;
	v=((h*d*b)+(d/b))/(3);
	return v;
}

void out(float vo)
{
	printf("The volume of Tromboloid is %.3f .",vo);
}


int main()
{
	float h,b,d,volume;
    	inp(&h,&b,&d);
	volume=vol(h,b,d);
	out(volume);
	return 0;
}


