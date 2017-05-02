#include <stdio.h>
int main()
{
	int a[5];
	int sum = 0;
	for (int i = 1; i <= 5; i++)
	{
		scanf("%d",&a[i-1]);
		sum = sum + a[i-1];
	}
	printf("Result is %d\n", sum);
	return 0;
}
