#include <stdio.h>
#include <stdlib.h>

int main() {
	int n = 0;
	scanf("%d", &n);
	int* arr;
	arr = (int*)malloc(sizeof(int) * n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}
	int temp = 0;
	for (int i = n; i > 0; i--)
	{
		for (int j = 0; j < i - 1; j++)
		{
			if (arr[j] > arr[j + 1]) {
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
	for (int i = 0; i < n; i++)
	{
		printf("%d\n", arr[i]);
	}
	free(arr);
}