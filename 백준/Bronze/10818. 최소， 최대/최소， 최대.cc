#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    if (scanf("%d", &n) != 1 || n <= 0) {
        return 0;
    }

    int* arr = (int*)malloc(sizeof(int) * n);
    if (!arr) return 0;

    int min, max;
    scanf("%d", &arr[0]);
    min = max = arr[0];

    for (int i = 1; i < n; i++) {
        scanf("%d", &arr[i]);
        if (arr[i] < min) min = arr[i];
        if (arr[i] > max) max = arr[i];
    }

    long long range_ll = (long long)max - (long long)min + 1LL;
    if (range_ll <= 0 || range_ll > 100000000LL) {
        free(arr);
        return 0;
    }

    int range = (int)range_ll;

    int* count = (int*)calloc(range, sizeof(int));
    int* output = (int*)malloc(sizeof(int) * n);
    if (!count || !output) {
        free(arr);
        free(count);
        free(output);
        return 0;
    }

    for (int i = 0; i < n; i++) {
        int idx = arr[i] - min; 
        count[idx]++;
    }

    for (int i = 1; i < range; i++) {
        count[i] += count[i - 1];
    }

    for (int i = n - 1; i >= 0; i--) {
        int idx = arr[i] - min;
        output[--count[idx]] = arr[i];
    }


    printf("%d %d\n", output[0], output[n - 1]);



    free(arr);
    free(count);
    free(output);
    return 0;
}