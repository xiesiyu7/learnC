#include<stdio.h>
int main()
{
	float fahr, celsius;
	int lower, upper, step;
	lower = -17;
	upper = 150;
	step = 10;
	celsius = lower;
	printf("celsius\tfahr\n");
	while (celsius <= upper) {
		fahr = (9.0/5.0) * celsius + 32;
		printf("%8.0f %4.1f\n", celsius, fahr);
		celsius = celsius + step;
	}
	return 0;
}
