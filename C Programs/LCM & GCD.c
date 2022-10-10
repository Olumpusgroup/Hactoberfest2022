#include<stdio.h>
int gcd(int a, int b)
{
	int r= a%b;
	while(r!=0)
	{
		a=b;
		b=r;
		r=a%b;
	
	}
	return b;
	
}
main()
{
	int Lcm;
	int a,b ;
	printf("Enter the value of a and b:");
	scanf("%d%d",&a,&b);
	Lcm = (a/gcd(a,b))*b ;
	printf("%d",Lcm);
}
