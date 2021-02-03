//WAP to find the volume of a tromboloid using 4 functions.
#include<stdio.h>

float inp()
{
	float x;
	scanf("%f",&x);
	return x;
}

float vol(float h, float b, float d)
{
	float v;
	v=(0.33)*((h*d*b)+(d/b));
	return v;
}

void out(float vo)
{
	printf("The volume of Tromboloid is %.3f .",vo);
}


int main()
{
	float h,b,d,volume;
	printf("Enter the value for  h :\n");
	h=inp();
printf("Enter the value for  b :\n");
	b=inp();
printf("Enter the value for d :\n");
d=inp();
	volume=vol(h,b,d);
	out(volume);
	return 0;
}
