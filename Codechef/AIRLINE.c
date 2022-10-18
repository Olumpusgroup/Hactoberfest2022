#include<stdio.h>

int main()
{
	int a,b,c,d,e,t;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
		if(a<=e && (b+c)<=d)
		{
			printf("YES\n");
		}
		
		else if(b<=e && (a+c)<=d)
		{
			printf("YES\n");
		}
		
		else if(c<=e && (a+b)<=d)
		{
			printf("YES\n");
		}
		
		else
			printf("NO\n");
	}
	return 0;
}