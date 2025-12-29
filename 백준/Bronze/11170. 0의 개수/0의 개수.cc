#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, m, t;
    char str[9] = {0};
    int c = 0;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        scanf("%d %d", &n, &m);

        for (int i = n; i <= m; i++)
        {
            snprintf(str, sizeof(str), "%d", i);
            for (int i = 0; str[i] != '\0'; i++)
            {
                if (str[i] == '0') {
                    c++;
                }
            }
        }
        printf("%d", c);
        printf("\n");
        c = 0;

    }

    return 0;
}