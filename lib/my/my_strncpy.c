/*
** EPITECH PROJECT, 2021
** gh
** File description:
** hgf
*/

#include <stddef.h>

int my_strlen(char const *str);

char *my_strncpy(char *dest , char const *src, int n)
{
    int i = 0;
    int verif = 0;

    for (verif = 0; src[verif] != '\0'; verif++);
    if (verif < n)
        return (NULL);
    while (i != n) {
        dest[i] = src[i];
        i = i + 1;
    }
    dest[n] = '\0';
    return (dest);
}
