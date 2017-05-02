#include <stdio.h>
int main()
{
	printf("I am happy!\n");
	int a;
	int counter;
	for (counter = 0; counter <= 9; counter = counter + 1) {
	printf("enter a number:");
	scanf("%d", &a);
	if (a >= 0) {
		printf("%d\n", a);
	} else {
	 	printf("%d\n", -a);
	}
	}
	return 0;
}
