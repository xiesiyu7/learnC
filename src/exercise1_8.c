#include<stdio.h>
int main()
{
	int c, nk, nz, nh;
	nk = 0;
	nz = 0;
	nh = 0;
	while ((c = getchar()) != EOF) {
		if (c == ' ') {
			++nk;
		} else if (c == '\t') {
			++nz;
		} else if (c == '\n') {
			++nh;
		}
	}
	printf("%d\n%d\n%d\n", nk, nz, nh);
}
