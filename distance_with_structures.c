//WAP to find the distance between two points using structures and 4 functions.
#include <stdio.h>
#include<math.h>

struct point
{
    float x,y;
};

typedef struct point po;

po inp()
{
    po p;
    printf("Enter the value of x : ");
    scanf("%f",&p.x);
    printf("Enter the value of y : ");
    scanf("%f",&p.y);
    return p;
}

float distance(po p1,po p2)
{
    float dist;
    dist = sqrt(pow(((p2.x)-(p1.x)),2)+pow(((p2.y)-(p1.y)),2));
    return dist;
}

void oup(po p1,po p2,float distance)
{
    printf("The distance between (%.3f,%.3f) and (%.3f,%.3f) is %.3f .\n",(p1.x),(p1.y),(p2.x),(p2.y),distance);
       
}

int main()
{
    po p1,p2;
    float d;
    p1=inp();
    p2=inp();
    d=distance(p1,p2);
    oup(p1,p2,d);

    return 0;
}
