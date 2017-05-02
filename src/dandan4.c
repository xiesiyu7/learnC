#include<stdio.h>
float power(int base,int n)
{
	if(base == 0 && n == 0)
	{
		printf("error\n");
		return 0;
	}
	float s = 1;
	int m;
	if(n < 0)
	{
		m = -n;
	}
	else {
		m = n;
	}
	for(int i = 1;i<=m;i++)
	{
		s = s * base;
	}
	if(n < 0)
	{
		s = 1/s;
	}
	return s;
}

int main()
{
	int base;
	int n;
	float result;
	scanf("%d",&base);
	scanf("%d",&n);
	result = power(base,n);
	printf("the result is %f\n",result);
	return 0;
}
