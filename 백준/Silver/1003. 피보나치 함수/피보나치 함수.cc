#include <stdio.h>

void fid(int n);

int zeroCount[41];

int oneCount[41];

int main() {
	int t = 0;
	int n = 0;

	scanf("%d", &t); 
	for(int i = 0; i < t; i++)
	{
		zeroCount[0] = 1;
		oneCount[0] = 0;
		zeroCount[1] = 0;
		oneCount[1] = 1;
		
		scanf("%d", &n);
		fid(n);
	}
}
void fid(int n) {
	if (n == 0)
	{
		printf("1 0\n");
		return;
	}
	else if (n == 1) {
		printf("0 1\n");
		return;
	}
	for (int i = 2; i <= n; i++)
	{
		oneCount[i] = oneCount[i - 1] + oneCount[i - 2];
		zeroCount[i] = zeroCount[i - 1] + zeroCount[i - 2];
	}
	printf("%d %d\n", zeroCount[n], oneCount[n]);
	return;
}