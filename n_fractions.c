//WAP to find the sum of n fractions.
#include<stdio.h>

struct fraction
{
	int num,den;
};

typedef struct fraction fract;

fract inp()
{
	fract f;
	printf("Enter the value for numerator : \n");
	scanf("%d",&f.num);
	printf("Enter the value for denominator : \n");
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

int main()
{
	int n;
	printf("Enter the no. of fractions to be calculated : \n");
	scanf("%d",&n);
fract res,arr[n];
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
int n1=res.num,n2=res.den;
while(n1!=n2)
{
    if(n1>n2)
    {
        n1-=n2;
    }
    else
    {
        n2-=n1;
    }
        
}

printf("The sum of all the fractions entered is %d/%d .\n",res.num/n1,res.den/n1);
return 0;
}

