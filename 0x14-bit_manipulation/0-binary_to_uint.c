
/**
 * binary_to_uint - function that converts a binary number to an
 * unsigned int
 *
 * @b: Pointer with the string whit the number to convert
 *
 * Return: The number converted
 */

unsigned int binary_to_uint(const char *b)
{
    unsigned int result = 0;
    unsigned int lenght = strlen(b);
    for ( int i = 0; i < lenght; i++)
    {
        if(b[i] == '1')
        {
           result = (result << 1) | 1;
        }
        else if (b[i] == '0')
        {
           result = result << 1;
        }
        else{
             // Invalid character in the binary string
            printf("Invalid character in binary string: %c\n", b[i]);
            return 0;
        }
    }
    return result;

}
