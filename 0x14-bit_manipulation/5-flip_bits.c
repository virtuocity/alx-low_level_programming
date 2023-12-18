/**
 * flip_bits -  returns the number of bits you would need to flip 
 * to get from one number to another
 * 
 * @n: first long int
 * @m: second long int
 * Return: number of bits needed
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
    int i, j;

    j = 0;
    for (i = 0; i < 64; i++)
    {

        if (((n >> i) & 1) != ((m >> i) & 1))
        {
            j++;
        }
    }
    return (j);
}