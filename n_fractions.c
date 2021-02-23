//WAP to find the sum of n fractions.
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

fract ainp(fract arr[])
{
    int n;
    printf("Enter the no. of fractions to be calculated : \n");
    scanf("%d",&n);
    fract res;
    arr[n];
    res.num=0;
    res.den=1;
    printf("Enter the fractions One-by-one :\n");
    for(int i =0;i<n;i++)
    {
	printf("Enter the value of Fraction %d\n" ,(i+1));
	arr[i]=inp();
    }
    for(int i = 0;i<n;i++)
    {
	res=calc(res,arr[i]);
    }
    return res;

}



void oup(fract ar)
{	
	printf("The sum of the fractions is %d/%d .\n",ar.num,ar.den);
}

int main()
{   
    fract arr[100],ar;
    ar=ainp(arr);
    oup(ar);
    return 0;
}


