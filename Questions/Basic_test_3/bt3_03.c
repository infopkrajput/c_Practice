#include <stdio.h>
int main()
{
    int ***r, **q, *p, i = 8;
    p = &i;
    (*p)++;
    q = &p;
    (**q)++;
    r = &q;
    printf("%d %d %d %d\n", *p, **q, ***r, i);
    return 0;
}
