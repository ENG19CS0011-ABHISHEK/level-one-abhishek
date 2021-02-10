//WAP to find the volume of a tromboloid using 4 functions.
#include<stdio.h>

void inp(float *h,float *b,float *d)
{
	printf("Enter the value for  h :\n");
	scanf("%f",h);
    	printf("Enter the value for  b :\n");
	scanf("%f",b);
    	printf("Enter the value for d :\n");
	scanf("%f",d);
}

float vol(float h, float b, float d)
{
	float v;
	v=((h*d*b)+(d/b))/(3);
	return v;
}

void out(float h, float b, float d,float vo)
{
	printf("The volume of Tromboloid with h=%.3f , b=%.3f, c=%.3f is %.3f .",h,b,d,vo);
}


int main()
{
	float h,b,d,volume;
    	inp(&h,&b,&d);
	volume=vol(h,b,d);
	out(h,b,d,volume);
	return 0;
}




