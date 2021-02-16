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
int gcd(fract sum)
{
	    fract n1;
	    n1.num=sum.num,n1.den=sum.den;
    	while(n1.num!=n1.den)
    	{
        	if(n1.num>n1.den)
            {
            	n1.num-=n1.den;
        	}
       	 	else
        	{
            	n1.den-=n1.num;
        	}
        }
        return n1.num;
}
void oup(fract f1,fract f2,fract sum,int g)
{	
	printf("The sum of both the fractions %d/%d and %d/%d is %d/%d .\n",f1.num,f1.den,f2.num,f2.den,sum.num/g,sum.den/g);
}

int main()
{   
	fract f1,f2,s;
	int g;
	f1=inp();
	f2=inp();
	s=calc(f1,f2);
	g=gcd(s);
    	oup(f1,f2,s,g);
	return 0;
}
