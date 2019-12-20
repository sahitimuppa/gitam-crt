#include<stdio.h>
int main()
{
	int a=80,b=10,n,i;
	scanf("%d",&n);
	printf("%d ",a);
	printf("%d ",b);
	for(i=1;i<=n;i++)
	{
		if (i%2==0)
		{
		b=b+5;
		printf(" %d ",b);
	}
	else
	{
	a=a-10;
	printf(" %d ",a);
	}
}
}
