#include "main.h"
/**
 * @brief Set the bit object at index position to 
 *
 * @param n decimal number
 * @param index index of bitto set to 1
 * @return return 1 if done , -1 other wise
 */
int set_bit(unsigned long int *n, unsigned int index)
{
    unsigned long int mask, new_bits;

    new_bits = 0;
    mask = 1;
    if (index > 63)
        return (-1);
    new_bits = *n | (mask << index);
    *n = new_bits;
    return (1);
}