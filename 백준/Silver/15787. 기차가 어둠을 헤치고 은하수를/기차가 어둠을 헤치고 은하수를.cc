#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    int* train = (int*)calloc(n + 1, sizeof(int));
    if (!train) return 1;

    const int MASK = (1 << 20) - 1;

    for (int k = 0; k < m; k++) {
        int cmd, i, x;
        scanf("%d %d", &cmd, &i);

        if (cmd == 1) {
            scanf("%d", &x);
            train[i] |= (1 << (x - 1));
        }
        else if (cmd == 2) { 
            scanf("%d", &x);
            train[i] &= ~(1 << (x - 1));
        }
        else if (cmd == 3) {    
            train[i] = (train[i] << 1) & MASK;
        }
        else if (cmd == 4) {     
            train[i] >>= 1;
        }
    }

    char* visited = (char*)calloc(1 << 20, sizeof(char));
    if (!visited) return 1;

    int count = 0;
    for (int i = 1; i <= n; i++) {
        if (!visited[train[i]]) {
            visited[train[i]] = 1;
            count++;
        }
    }

    printf("%d\n", count);

    free(visited);
    free(train);
    return 0;
}