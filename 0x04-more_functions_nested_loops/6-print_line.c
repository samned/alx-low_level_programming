#include "main.h"
/**
 * print_line - print n lines of _
 * @n: number of lines
 *
 * Description: This is a description
 *
 * Return: void
 */
void print_line(int n)
{
    int i;
    if (n > 0)
    {
        for (i = 0; i < n; i++)
        {
            _putchar('_');
        }
    }
    _putchar('\n');
}
