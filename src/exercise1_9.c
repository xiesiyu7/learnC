#include<stdio.h>
int main()
{
	int c;
	int x = 0;
	while ((c = getchar()) != EOF) {
		if (c == ' ' && x == 0) {
			putchar(c);
			x = 1;
		} else if (c == ' ' && x != 0) {
		} else {
			putchar(c);
			x = 0;
		}
	}
}
