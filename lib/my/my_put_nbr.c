/*
** EPITECH PROJECT, 2021
** my_put_nbr.c
** File description:
** do my_put_nbr
*/

#include<unistd.h>

void my_putchar(char c);

void my_put_nbr(int n)
{
    int nb = 0;

    if (n < 0) {
        my_putchar('-');
        n *= -1;
        my_put_nbr(n);
        return;
    } else if (n > 9)
        my_put_nbr(n / 10);
    nb = n % 10;
    my_putchar(nb + '0');
    return;
}
