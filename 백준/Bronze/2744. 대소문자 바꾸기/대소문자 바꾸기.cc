#include <stdio.h>

int main() {
	char n[101];
	scanf("%s", &n);

	for (int i = 0; n[i] != '\0'; i++)
	{
		if (n[i] >= 'A' && n[i] <= 'Z') {
			printf("%c", n[i] + 32);
		}
		else if (n[i] >= 'a' && n[i] <= 'z') {
			printf("%c", n[i] - 32);
		}
	}

}