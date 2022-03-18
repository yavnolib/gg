#include <math.h>
#include "module.h"

int prov(int n) {
    int count = 0, i = 0;
    for (i = 1; i <= ( (int) sqrtl(n)); i++) {
        if (!(n % i))
            count++;
    }

    if (count == 1)
        return 1;
    else
        return 0;
}
