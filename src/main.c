#include "public/geometry.h"

int main(int argc, char *argv[])
{
    int a = 5;
    int b = 10;

    int sum = add(a, b);
    printf("The sum of %d and %d is %d\n", a, b, sum);

    int difference = subtract(a, b);
    printf("The difference of %d and %d is %d\n", a, b, difference);

    return 0;
}