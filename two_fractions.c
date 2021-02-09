//WAP to find the sum of two fractions.
#include <stdio.h>
#include<math.h>

struct fractions
{
    int num,den;
};
 
typedef struct fractions fract;

fract inp()
{
    fract f;
    printf("Enter the numerator : \n");
    scanf("%d",&f.num);
    printf("Enter the denominator : \n");
    scanf("%d",&f.den);
    return f;
     
}

fract calc(fract f1,fract f2)
{
	fract sum;
	if(f1.den == f2.den)
    {
	sum.num=f1.num+f2.num;
	sum.den=f1.den;
	return sum;
	}
	else
	{
		sum.num =(f1.num*f2.den)+(f2.num*f1.den);
		sum.den = f1.den*f2.den;
		return sum;
    }
}

void oup(fract sum)
{
	printf("The sum of both the fractions is %d/%d .\n",sum.num,sum.den);
}

int main()
{   
	fract f1,f2,s;
	f1=inp();
	f2=inp();
	s=calc(f1,f2);
	oup(s);
	return 0;
}
