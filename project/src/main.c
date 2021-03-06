#include <stdio.h>
#include <stdlib.h>

#include "utils.h"
#include "module.h"
#include "casefour.h"

#define ERR_ARGS_COUNT (-1)
#define ERR_WRONG_FLG (-2)

#define TST_FOO_FIX     1
#define TST_FOO_IMPL    2
#define TST_MOD_IMPL    3
#define TST_FOUR        4

/* NOTE(stitaevskiy):
 * We use `atoi` function just for simplification and code reducing.
 * This function doesn't report conversation errors.
 * For safety program we recommend using `strtol` and its analogs.
 * (See `man atoi` and `man strtol` for more info).
 *
 * const char str_num[] = "1234";
 * char* end = NULL;
 * int val = (int) strtol(str_num, &end, 0);
 * if (end != '\0') {
 *     //ERROR
 * }
 *
 * */

int main(int argc, const char** argv) {
    if (argc < 3) {
        return ERR_ARGS_COUNT;
    }

    int Test_case = atoi(argv[1]);
    const char* data = argv[2];

    switch (Test_case) {
        case TST_FOO_FIX: {
            size_t to = atoi(data);
            size_t ticks_count = timer_from(to);
            printf("\n%zu", ticks_count);
            break;
        }
        case TST_FOO_IMPL: {
            if (argc == 4) {
                int base = atoi(data);
                int pow =  atoi(argv[3]);
                int res = custom_pow(base, pow);    // TODO(AnastasiaShil): Implement me

                printf("%d\n", res);
            } else {
                return ERR_ARGS_COUNT;
            }
            break;
        }
        case TST_MOD_IMPL: {
            int num = atoi(data);
            // TODO(AnastasiaShil): Print to stdout `1` if `num` is prime number and `0` otherwise
            // This function MUST be implemented in
            // a separate C-module (not in `main` or `utils` module)
            printf("%d\n", prov(num));
            break;
        }
        case TST_FOUR: {
            int number = atoi(data);
            print_n(number);
            break;
        }
        default: {
            return ERR_WRONG_FLG;
        }
    }
}
