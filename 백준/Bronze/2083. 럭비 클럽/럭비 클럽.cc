#include <stdio.h>


int main() {
	char name[100];
	int age, m;

	scanf("%s %d %d", &name, &age, &m);

	while (name[0] != '#') {
		if (name[0] == '#')
		{
			break;
		}

		if (age > 17 || m >= 80)
		{
			printf("%s Senior\n", name);
		}
		else
		{
			printf("%s Junior\n", name);
		}

		scanf("%s %d %d", &name, &age, &m);
	}
}