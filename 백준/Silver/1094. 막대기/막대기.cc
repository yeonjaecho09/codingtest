#include <stdio.h>
#include <stdlib.h>


int main() {
	int n;
	int stick = 64;
	int remain = 0;
	int sum = 64;
	int stickNum = 1;
	scanf("%d", &n);
	while(1) {
		if (n == 64 || n == 32) {
			printf("1");
			return 0;
		}
		else{
			remain = stick / 2;
			if (sum - remain >= n) {
				sum -= remain;
				stick = remain;
			}
			else {
				stick = remain;
				stickNum += 1;
			}
			if (sum == n)
			{

				break;
			}
		}
	}
	printf("%d", stickNum);
}