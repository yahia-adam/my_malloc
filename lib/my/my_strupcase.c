/*
** EPITECH PROJECT, 2021
** fghj
** File description:
** fghj
*/

#include <stdlib.h>

int my_strlen(char const *str);

char *my_strupcase(char *str)
{
    int i = 0;
    char *dest = malloc(sizeof(char) * (my_strlen(str) + 1));

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            dest[i] = (str[i] - 32);
        } else
            dest[i] = str[i];
    }
    dest[i] = '\0';
    return (dest);
}
