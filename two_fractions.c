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

int gcd(int a,int b)
{
    	while(a!=b)
    	{
        	if(a>b)
            {
            	a-=b;
        	}
       	 	else
        	{
            	b-=a;
        	}
        }
        return a;
}

fract calc(fract f1,fract f2)
{
	fract sum;
	sum.num =(f1.num*f2.den)+(f2.num*f1.den);
	sum.den = f1.den*f2.den;
	int g=gcd(sum.num,sum.den);
	sum.num = sum.num/g;
	sum.den = sum.den/g;
	return sum;
	
}

void oup(fract f1,fract f2,fract sum)
{	
	printf("The sum of both the fractions %d/%d and %d/%d is %d/%d .\n",f1.num,f1.den,f2.num,f2.den,sum.num,sum.den);
}

int main()
{   
	fract f1,f2,s;
	int g;
	f1=inp();
	f2=inp();
	s=calc(f1,f2);
    	oup(f1,f2,s);
	return 0;
}
