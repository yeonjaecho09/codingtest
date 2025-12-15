#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main() {
	int n = 0;
	scanf("%d", &n);
	int* arr;
	arr = (int*)malloc(sizeof(int) * (n + 1));
	int sum = 0;
	if (n >= 1) { arr[1] = 1;}
	if (n >= 2) { arr[2] = 2;}
	for (int i = 3; i <= n; i++)
	{
		arr[i] = (arr[i - 1] + arr[i - 2]) % 10007;
		
	}
	sum = arr[n];
	printf("%d", sum);

	free(arr);

}