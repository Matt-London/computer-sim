#include <stdio.h>
#include <stdbool.h>

#include "../include/logicGates.h"

int main(void) {
    printf("1 xnor 1 = %d\n", xnor(1, 1));
    printf("1 xnor 0 = %d\n", xnor(1, 0));
    printf("0 xnor 1 = %d\n", xnor(0, 1));
    printf("0 xnor 0 = %d\n", xnor(0, 0));

    return 0;
}
