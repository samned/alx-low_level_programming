#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * *str_concat - *str_concat
 * @s1: string 1
 * @s2: string 2
 *
 * Return: Char
 */
char *str_concat(char *s1, char *s2)
{
    char *concat;
    int size1, size2, i;

    for (size1 = 0; s1[size1] != '\0'; size1++)
        ;
    for (size2 = 0; s2[size2] != '\0'; size2++)
        ;
    concat = malloc((size1 * sizeof(*s1)) + (size2 * sizeof(*s2)) + 1);
    for (i = 0; i < size1; i++)
    {
        concat[i] = s1[i];
    }
    for (i = 0; i < size2; i++)
    {
        concat[i + size1] = s2[i];
    }
    return (concat);
}
