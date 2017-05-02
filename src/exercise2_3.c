#include<stdio.h>
#define YES 1
#define NO 0
int htoi(char s[])
{
	int digit, inhex;
	int i, n;
	i = 0;
	if (s[i] == '0') {
		++i;
		if (s[i] == 'x' || s[i] == 'X') {
			++i;
		}
	}
	n = 0;
	inhex = YES;
	for ( ; inhex == YES; ++i) {
		if (s[i] >= '0' && s[i] <= '9') {
			digit = s[i] - '0';
		} else if (s[i] >= 'a' && s[i] <= 'f') {
			digit = s[i] - 'a' + 10;
		} else if (s[i] >= 'A' && s[i] <= 'F') {
			digit = s[i] -'A' + 10;
		}
		else {
			inhex = NO;
		}
		if (inhex == YES) {
			n = 16 * n + digit;
		}
	}
	return n;
}

int main()
{
	char s[100];
	int n;
	scanf("%s", s);
	n = htoi(s);
	printf("%d\n", n);
	return 0;
}
