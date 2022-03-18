#include <stdio.h>
#include "casefour.h"

void print_n(int n) {
    if (n < 1)
        return;

    if (n != 1) {
        print_n(n - 1);
        printf("%d ", n);
    } else {
        printf("%d ", n);
    }
}

