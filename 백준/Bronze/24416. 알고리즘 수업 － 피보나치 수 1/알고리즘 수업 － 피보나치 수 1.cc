#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int fib1(int n);
int fib2(int n, int arr[]);

int count1 = 0;
int count2 = 0;

int main() {
	int* arr;
	int n = 0;
	scanf("%d", &n);
	arr = (int*)malloc(sizeof(int) * n + 1);


	
	count1 = fib1(n);
	count2 = fib2(n, arr);

	printf("%d %d", count1, count2);
}

int fib1(int n) {
	if (n == 1 || n == 2) {
		 return 1;
	}
	count1++;
	return (fib1(n - 1) + fib1(n - 2));
	return count1;
}

int fib2(int n, int arr[]) {
	int sum;
	if (n == 1 || n == 2) {
		return count2;
	}
	for (int i = 3; i <= n; i++)
	{
		sum = arr[i - 2] + arr[i - 1];
		arr[i] = sum;
		++count2;
	}
	return count2;
}
