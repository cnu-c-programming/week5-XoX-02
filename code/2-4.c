#include <stdio.h>

long my_strtol(char *str, char **endptr) {
    long res = 0;

    while(*str - '0'>=0 && *str - '0'<=9){
        res *= 10;
        res += *str - '0';
        str ++;
    }

    *endptr = str;

    return res;
}

int main() {
    char str[] = "2026hello";
    char *end;

    long val = my_strtol(str,&end);

    printf("%ld %s\n", val, end);
    return 0;
}