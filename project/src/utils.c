#include <stdio.h>
#include <math.h>
#include "utils.h"

size_t timer_from(size_t from) {
    size_t counter = 0;
    size_t c = from;
    for (size_t i = from; i <= c; --i) {
        ++counter;
        if (counter <= c)
            printf("%zu ", i);
        else
            printf("%zu", i);
    }
    return counter;
}

// TODO(AnastasiaShil): Implement `power of` function
// int custom_pow(int base, int power);

int custom_pow(int base, int power) {
    int res = 1;

    if (power == 0)
        return 1;
    for (int i = 1; i <= power; i++) {
        res *= base;
    }
    return res;
}

