#include<stdio.h>
int main()
{
	float fahr, celsius;
	int lower, upper, step;
	lower = 0;
	upper = 300;
	fahr = lower;
	printf("fahr\tcelsius\n");
	for (fahr = upper; fahr >= lower; fahr = fahr - 20) {
		celsius = (5.0/9.0) * (fahr-32.0);
		printf("%4.0f %8.1f\n", fahr, celsius);
	}
	return 0;
}
