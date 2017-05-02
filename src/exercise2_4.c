#include<stdio.h>
void squeeze(char s1[], char s2[])
{
	int i,j;
	for (i = j = 0; s1[i] != '\0'; i++) {
		if (s2[i] != s1[i]) {
			s2[j] = s2[i];
			j++;
		}
	}
	s2[j] = '\0';
}

int main()
{
	char s1[50];
	char s2[50];
	scanf("%s", s1);
	scanf("%s", s2);
	squeeze(s1, s2);
	printf("%s\n", s2);
	return 0;
}
