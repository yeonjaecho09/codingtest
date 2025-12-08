#include <stdio.h>
#include <stdlib.h>

int main() {
	int n = 0;
	int k = 0;

	scanf("%d %d", &n, &k);
	int* item;
	item = (int*)malloc(sizeof(int) * n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &item[i]);
	}

	int count = 0;
	for (int i = n - 1; i >= 0; i--)
	{
		if (k < item[i]) {
			continue;
		}
		count += k / item[i];
		k = k % item[i];
		if (k == 0)
		{
			break;
		}
	}
	
	printf("%d", count);
	free(item);
}