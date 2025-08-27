#include <stdio.h>
#include <string.h>

int main() {
	char n[1000], k[1000];
	scanf("%s", &n);
	scanf("%s", &k);

	int len1 = strlen(n);
	int len2 = strlen(k);

	if (len1 >= len2) {
		printf("go");
	}
	if (len1 < len2) {
		printf("no");
	}

}