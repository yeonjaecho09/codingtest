#include <stdio.h>
#include <string.h>

int main() {
    int n;
    char s[1001];

    
    if (scanf("%d", &n) != 1) {
        return 1;
    }

    
    for (int i = 0; i < n; i++) {
    
        if (scanf("%1000s", s) != 1) {
            break; 
        }

        
        int len = strlen(s);

        
        if (len > 0) {
            printf("%c%c\n", s[0], s[len - 1]);
        }
    }

    return 0;
}