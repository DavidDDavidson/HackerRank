#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int integer = 0;
    long long_integer = 1;
    long long long_long_integer = 2;
    char character = '3';
    float floating_point = 4.0;
    double double_integer = 5.0;
    scanf("%d %ld %lld %c %f %lf", &integer, &long_integer,
    &long_long_integer, &character, &floating_point, &double_integer);
    printf("%d\n%ld\n%lld\n%c\n%f\n%lf\n", integer, long_integer,
    long_long_integer, character, floating_point, double_integer);
    return 0;
}
