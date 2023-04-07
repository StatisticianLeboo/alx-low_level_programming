#include <main.h>


/**
 * binary_to_uint - will help to convert the binary value to unsigned integer
 * @b: variable to be convereted
 * Return: always zero
 */


unsigned int binary_to_uint(const char *b) {
    if (b == NULL) {
        return 0;
    }

    unsigned int decimal = 0;
    int len = strlen(b);

    for (int i = 0; i < len; i++) {
        if (b[i] == '0') {
            decimal = decimal << 1;  // shift left by one bit
        } else if (b[i] == '1') {
            decimal = (decimal << 1) | 1;  // shift left by one bit and set the least significant bit to 1
        } else {
            return 0;  // invalid binary string
        }
    }

    return decimal;
}

