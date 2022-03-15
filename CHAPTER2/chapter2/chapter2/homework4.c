#include <stdio.h>

int main() {
    char a = 'n';
    char b = "name";
    char c[] = "name";
    char d[4] = "name";
    char e[5] = "name";
    char f[4] = { 'n', 'a', 'm', 'e' };
    char g[5] = { 'n', 'a', 'm', 'e' };
    char* h = "name";

    printf("a: %c\n", a);
    printf("b: %s\n", b);
    printf("c: %s\n", c);
    printf("d: %s\n", d);
    printf("e: %s\n", e);
    printf("f: %s\n", f);
    printf("g: %s\n", g);
    printf("h: %s\n", h);

    return 0;
}