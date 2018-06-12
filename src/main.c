#include <stdio.h>

#include "A.h"

int main(void)
{
    printf("Init A with 17...\n");
    A_Handle a = A_create(17);

    printf("Calling A with 5\n");
    int resultA = A_multiplyWithInitial(a, 5);

    printf("Result: %d\n", resultA);

    return 0;
}