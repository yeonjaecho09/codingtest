#include <stdio.h>
#include <stdlib.h>

int main() {
	int N = 0;
	scanf("%d", &N);
	int* ListA;
	ListA = (int*)malloc(sizeof(int) * N);
	int* ListB;
	ListB = (int*)malloc(sizeof(int) * N);
	int sum = 0;
	for (int i = 0; i < N; i++)
	{
		scanf("%d", &ListA[i]);
	}

	for (int i = 0; i < N; i++)
	{
		scanf("%d", &ListB[i]);
	}

	for (int i = N - 1; i > 0; i--)
	{
		int temp1 = 0;
		for (int j = 0; j < i; j++) {
			if (ListA[j] > ListA[j + 1])
			{
				temp1 = ListA[j];
				ListA[j] = ListA[j + 1];
				ListA[j + 1] = temp1;
			}
		}
	}
	int temp2 = 0;
	for (int i = N - 1; i > 0;  i--)
	{
		for (int j = 0; j < i; j++) {
			if (ListB[j] < ListB[j + 1])
			{
				temp2 = ListB[j];
				ListB[j] = ListB[j + 1];
				ListB[j + 1] = temp2;
			}
		}
	}

	for (int i = 0; i < N; i++)
	{
		sum += ListA[i] * ListB[i];
	}
	printf("%d", sum);
	free(ListA);
	free(ListB);
}