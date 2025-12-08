#include <stdio.h>
#include <stdlib.h>

int main() {
	int n = 0;

	scanf("%d", &n);
	int* item;
	item = (int*)malloc(sizeof(int) * n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &item[i]);
	}

	int temp = 0;

	for (int i = n - 1; i >= 0; i--)
	{
		for (int j = 0; j < i; j++)
		{
			if (item[j] > item[j + 1]) {
				temp = item[j];
				item[j] = item[j + 1];
				item[j + 1] = temp;
			}
		}
	}
	int sum = 0;
	int before = 0;
	for (int i = 0; i < n; i++)
	{
		if (i == 0) {
			sum += item[i];
			before += item[i];
		}
		else
		{
			sum += item[i] + before;
			before += item[i];
		}
	}
	printf("%d", sum);
	free(item);
}