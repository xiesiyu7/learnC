#include<stdio.h>
int any(char s1[], char s2[])
{
	int i,j;
	for (i = 0; s1[i] != '\0'; i++) {
		for (j = 0; s2[j] != '\0';j++) {
			if (s1[i] == s2[j]) {
				return i;
				}
		}
	}
	return -1;
}

int main()
{
	int n = 50;
	int i;
	char s1[50];
	char s2[50];
	scanf("%s", s1);
	scanf("%s", s2);
	printf("%d\n", any(s1, s2));
	return 0;
}
