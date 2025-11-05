#include <stdio.h>
#include <string.h> 


int get_digit(const char* color_name) {
    if (strcmp(color_name, "black") == 0) return 0;
    else if (strcmp(color_name, "brown") == 0) return 1;
    else if (strcmp(color_name, "red") == 0) return 2;
    else if (strcmp(color_name, "orange") == 0) return 3;
    else if (strcmp(color_name, "yellow") == 0) return 4;
    else if (strcmp(color_name, "green") == 0) return 5;
    else if (strcmp(color_name, "blue") == 0) return 6;
    else if (strcmp(color_name, "violet") == 0) return 7;
    else if (strcmp(color_name, "grey") == 0) return 8;
    else if (strcmp(color_name, "white") == 0) return 9;
    
}


long long get_multiplier(const char* color_name) {
    if (strcmp(color_name, "black") == 0) return 1;
    else if (strcmp(color_name, "brown") == 0) return 10;
    else if (strcmp(color_name, "red") == 0) return 100;
    else if (strcmp(color_name, "orange") == 0) return 1000;
    else if (strcmp(color_name, "yellow") == 0) return 10000;
    else if (strcmp(color_name, "green") == 0) return 100000;
    else if (strcmp(color_name, "blue") == 0) return 1000000;
    else if (strcmp(color_name, "violet") == 0) return 10000000;
    else if (strcmp(color_name, "grey") == 0) return 100000000;
    else if (strcmp(color_name, "white") == 0) return 1000000000;
    else if (strcmp(color_name, "gold") == 0) return 1;
   
}

int main() {
    char n1[100], n2[100], n3[100];
    int k1, k2;

    long long sum = 0;


    if (scanf("%s%s%s", n1, n2, n3) != 3) {

        return 1;
    }


    k1 = get_digit(n1);
    k2 = get_digit(n2);
    long long multiplier = get_multiplier(n3);

    if (k1 != -1 && k2 != -1 && multiplier != 0) {

        sum = (long long)(k1 * 10 + k2) * multiplier;
            
        printf("%lld\n", sum);
    }
    return 0;
}