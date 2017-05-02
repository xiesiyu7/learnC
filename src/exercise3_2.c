#include<stdio.h>
void escape(char s[], char t[])
{
	int i, j;
	for (i = j = 0; t[i] != '\0'; i++)
		switch (t[i]) {
			case '\n':
			s[j++] = '\\';
			s[j++] = 'n';
			break;
			case '\t':
			s[j++] = '\\';
			s[j++] = 't';
			default:
			s[j++] = t[i];
			break;
		}
		s[j] = '\0';
}

int main()
{
	int n = 50;
	char s[n], t[n];
	scanf("%s", s);
	scanf("%s", t);
	escape(s, t);
	printf("%s\n", s);
}
