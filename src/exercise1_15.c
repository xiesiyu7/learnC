#include<stdio.h>
float temptran(float F)
{
	float C;
	C = (5.0/9.0) * (F - 32);
	return C;
}

int main()
{
	float f1, f2, f3, c1, c2, c3;
	f1 = 0.0;
	f2 = 80.0;
	f3 = 160.0;
	c1 = temptran(f1);
	c2 = temptran(f2);
	c3 = temptran(f3);
	printf("%6.2f %6.2f %6.2f\n", c1, c2, c3);
	return 0;
}
