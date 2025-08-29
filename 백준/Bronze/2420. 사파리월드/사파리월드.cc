#include <stdio.h>
#include <cmath>

int main() {
	long long int n, m;
	scanf("%lld %lld", &n, &m);

	printf("%lld", llabs(n - m));
}