#include <stdio.h>
#include <stdlib.h>

void update(int *a,int *b) {
    *a = *a + *b;
    /*change the value at a (which is outside the scope) as described */
    *b = abs(*a -*b -*b);
    /*value of a differs from original value. Thus, subtract the value
    as necessary and compute the operation as required. Take it's absolute
    value */
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;

    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
