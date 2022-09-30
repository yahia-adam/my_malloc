/*
** EPITECH PROJECT, 2021
** fgh
** File description:
** fghj
*/

#include <unistd.h>

int my_isneg(int nb)
{
    if (nb >= 0) {
        write(1, "P", 1);
        return 1;
    }
    if (nb < 0) {
        write(1, "N", 1);
        return -1;
    }
}
