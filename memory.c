#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *e = malloc(sizeof(int));

    e[0] = 1;
    e[1] = 2;
    char *s = "HI!";
    char *x = &s[0];
    char *d = &s[0];
    printf("%p\n",x);
    printf("%p\n",d);
    printf("%s",x);
    free(e);
}