//WAP to find the distance between two point using 4 functions.
#include<stdio.h>
#include<math.h>

float inp()
{
	float x;
	scanf("%f",&x);
	return x;
}

float squ(float x1, float x2, float y1, float y2)
{
	float s;
	s=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
	return s;
}

void out(float x1,float x2,float y1,float y2,float sq)
{
	printf("The Distance Of %f ,%f ,%f ,%f Is %.3f .",x1,x2,y1,y2,sq);
}


int main()
{
	float x1,x2,y1,y2,square_root;
	printf("Enter the value for  x1 :\n");
	x1=inp();
  printf("Enter the value for  x2 :\n");
	x2=inp();
  printf("Enter the value for y1 :\n");
  y1=inp();
  printf("Enter the value for y2 :\n");
  y2=inp();
	square_root=squ(x1,x2,y1,y2);
	out(x1,x2,y1,y2,square_root);
	return 0; 
}
